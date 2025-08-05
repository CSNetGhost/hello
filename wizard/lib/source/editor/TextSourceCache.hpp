// ****************************************************************************
// CUI
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2003-2015 The Boeing Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************

#ifndef TEXTSOURCECACHE_HPP
#define TEXTSOURCECACHE_HPP

#include <map>      // 包含标准映射容器，用于存储键值对
#include <set>      // 包含标准集合容器，用于存储唯一元素
#include <string>   // 包含字符串类，用于处理文本数据

// 包含项目自定义的头文件
#include "UtPath.hpp"             // 包含路径处理相关的定义
#include "Util.hpp"               // 包含通用工具函数或定义
#include "WsfParseSourceProvider.hpp" // 包含解析源提供者相关的定义

// 前向声明 Qt 类，减少编译依赖
class QsciDocument;               // Qt 的 Scintilla 文档类，可能用于语法高亮和编辑
class UtTextDocument;             // 自定义的基础文本文档类
class WsfParseNode;               // 可能与解析树节点相关的类

namespace wizard
{
    class ProjectWorkspace;       // 前向声明 ProjectWorkspace 类，表示项目工作空间
    class TextSource;             // 前向声明 TextSource 类，表示项目中的文本源文件

    /**
     * @class TextSourceCache
     * @brief 源缓存类，提供对项目中所有引用文件的内存访问。
     *
     * `TextSourceCache` 类用于在内存中缓存项目中引用的所有文件。这提高了访问速度，
     * 并允许在无需保存到文件的情况下对文件内容进行更改和响应。
     */
    class VI_EXPORT TextSourceCache
    {
    public:
        /**
         * @brief 构造函数
         * @param aWorkspacePtr 指向项目工作空间的指针，用于管理项目相关的资源
         */
        explicit TextSourceCache(wizard::ProjectWorkspace* aWorkspacePtr);

        /**
         * @brief 析构函数
         */
        ~TextSourceCache();

        /**
         * @brief 获取指定路径的 `TextSource` 对象。
         *
         * 如果指定的路径对应的 `TextSource` 尚未加载，则根据参数 `aRead` 决定是否读取文件内容。
         *
         * @param aPath 文件路径，类型为 `UtPath`
         * @param aRead 是否在获取时读取文件内容，默认为 `true`
         * @return 指向 `TextSource` 的指针，如果未找到则返回 `nullptr`
         */
        TextSource* GetSource(const UtPath& aPath, bool aRead = true);

        /**
         * @brief 查找指定路径的 `TextSource` 对象，不自动读取文件内容。
         *
         * 如果找到对应的 `TextSource`，则返回其指针；否则返回 `nullptr`。
         *
         * @param aPath 文件路径，类型为 `UtPath`
         * @param aRead 是否在查找时读取文件内容，默认为 `true`（但此参数在此函数中可能被忽略）
         * @return 指向 `TextSource` 的指针，如果未找到则返回 `nullptr`
         */
        TextSource* FindSource(const UtPath& aPath, bool aRead = true);

        /**
         * @brief 查找指定文件路径字符串的 `TextSource` 对象，不自动读取文件内容。
         *
         * 如果找到对应的 `TextSource`，则返回其指针；否则返回 `nullptr`。
         *
         * @param aPath 文件路径字符串
         * @param aRead 是否在查找时读取文件内容，默认为 `true`（但此参数在此函数中可能被忽略）
         * @return 指向 `TextSource` 的指针，如果未找到则返回 `nullptr`
         */
        TextSource* FindSource(const std::string& aPath, bool aRead = true);

        /**
         * @brief 查找与指定 `UtTextDocument` 指针关联的 `TextSource` 对象。
         *
         * 如果找到对应的 `TextSource`，则返回其指针；否则返回 `nullptr`。
         *
         * @param aParseSourcePtr 指向 `UtTextDocument` 的指针
         * @return 指向 `TextSource` 的指针，如果未找到则返回 `nullptr`
         */
        TextSource* FindSource(UtTextDocument* aParseSourcePtr);

        /**
         * @brief 定义源映射类型，用于存储文件路径字符串到 `TextSource` 指针的映射。
         *
         * 使用自定义比较器 `wizard::UtilFileStringCompare` 对路径字符串进行排序或比较。
         */
        typedef std::map<std::string, TextSource*, wizard::UtilFileStringCompare> SourceMap;

        /**
         * @brief 获取当前缓存中的所有源映射。
         *
         * @return 常量引用到 `SourceMap`，表示当前缓存中的所有 `TextSource` 对象
         */
        const SourceMap& GetSources() const { return mSources; }

        /**
         * @brief 删除指定的 `TextSource` 对象从缓存中。
         *
         * @param aSourcePtr 指向要删除的 `TextSource` 对象的指针
         */
        void DeleteSource(TextSource* aSourcePtr);

        /**
         * @brief 清空缓存，删除所有缓存的 `TextSource` 对象。
         */
        void Clear();

        /**
         * @brief 存储新添加的 `TextSource` 对象的集合。
         *
         * 此集合用于跟踪最近添加到缓存中的源，可能用于后续的处理或通知。
         */
        std::set<TextSource*> mNewSources;

    protected:
        /**
         * @brief 指向项目工作空间的指针，用于管理项目相关的资源。
         */
        wizard::ProjectWorkspace* mWorkspacePtr;

        /**
         * @brief 源映射，存储文件路径字符串到 `TextSource` 指针的映射。
         */
        SourceMap mSources;
    };

    /**
     * @class CacheSourceProvider
     * @brief 提供源给 `WsfParser` 的类，从 `TextSourceCache` 中获取源而不是直接从文件读取。
     *
     * `CacheSourceProvider` 类继承自 `WsfParseSourceProvider`，重写了源提供者的接口，
     * 使得解析器从内存中的 `TextSourceCache` 获取源文件内容，而不是直接从磁盘文件读取。
     * 这提高了性能，并允许在内存中对源进行修改而不必立即保存到文件。
     */
    class CacheSourceProvider : public WsfParseSourceProvider
    {
    public:
        /**
         * @brief 构造函数
         * @param aCachePtr 指向 `TextSourceCache` 的指针，用于获取和管理 `TextSource` 对象
         */
        explicit CacheSourceProvider(TextSourceCache* aCachePtr)
            : mAllowNewSources(true)      // 默认允许创建新的源
            , mCachePtr(aCachePtr)        // 初始化缓存指针
        {
        }

        /**
         * @brief 是否允许创建新的源。
         *
         * 如果为 `true`，当请求的源不存在时，可以创建新的 `TextSource` 对象。
         * 如果为 `false`，则仅查找已存在的源，不创建新的。
         */
        bool             mAllowNewSources;

        /**
         * @brief 指向 `TextSourceCache` 的指针，用于获取和管理 `TextSource` 对象。
         */
        TextSourceCache* mCachePtr;

        /**
         * @brief 重写基类的 `FindSource` 函数，从缓存中查找指定路径的 `UtTextDocument`。
         *
         * @param aPath 文件路径，类型为 `UtPath`
         * @param aReadAccess 是否需要读取访问权限，默认为 `true`
         * @return 指向找到的 `UtTextDocument` 的指针，如果未找到则返回 `nullptr`
         */
        UtTextDocument* FindSource(const UtPath& aPath, bool aReadAccess) override;

        /**
         * @brief 重写基类的 `CreateSource` 函数，从缓存中创建指定路径的 `UtTextDocument`。
         *
         * 如果 `mAllowNewSources` 为 `true`，并且指定的路径对应的 `TextSource` 尚未存在，
         * 则创建一个新的 `TextSource` 对象并添加到缓存中。
         *
         * @param aPath 文件路径，类型为 `UtPath`
         * @return 指向创建或找到的 `UtTextDocument` 的指针，如果无法创建则返回 `nullptr`
         */
        UtTextDocument* CreateSource(const UtPath& aPath) override;
    };
} // namespace wizard

#endif // TEXTSOURCECACHE_HPP