// ****************************************************************************
// CUI
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2018 Infoscitex, a DCS Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************
#pragma execution_character_set("utf-8")
#include "StartupDialog.hpp"

#include "ActionManager.hpp"
#include "ProjectWorkspace.hpp"
#include "RunManager.hpp"

wizard::StartupDialog::StartupDialog(QStringList&    aInputFiles,
                                     QWidget*        aParent,
                                     Qt::WindowFlags aFlags /*= Qt::WindowFlags()*/)
   : wkf::StartupDialog<QStringList>(aInputFiles, aParent, aFlags)
{
   mDocLinks    = {{"wizard.html", u8"主页"},
                {"wizard_users_guide.html", u8"用户指南"},
                {"wizard_reference_guide.html", u8"参考手册"},
                {"wizard_change_log.html", u8"变更日志"},
                {"main_page.html", u8"AFSIM 主页"}};
   auto* newPtr = mUi.buttonBox->addButton(u8"新建...", QDialogButtonBox::DestructiveRole);
   // According to Qt docs, clicking a button defined with a "destructive" role should close the dialog, but it does
   // not. This is reported in https://bugreports.qt.io/browse/QTBUG-67168. Hence the need to call QDialog::done.
   connect(newPtr,
           &QPushButton::clicked,
           this,
           [this]()
           {
              done(0);
              ProjectWorkspace::Instance()->GetActionManager()->NewProject();
           });
}

QStringList wizard::StartupDialog::Browse()
{
   // If we have a previous scenario, open the Browse Scenario dialog to the same directory that scenario is in.
   QString directory = wizRunMgr.GetMostRecentDirectory();

   // This does not use wkf::getOpenFileNames due to wkf::Environment not being set up yet,
   // instead the Browse button is disabled directly to prevent file browsing
   return QFileDialog::getOpenFileNames(this,
                                        u8"选择想定文件",
                                        directory,
                                        u8"AFSIM Input(*.afproj *.txt);; AFSIM Project(*.afproj);; All Files (*.*)");
}

void wizard::StartupDialog::RemoveRecent(const QStringList& aRecent)
{
   wizRunMgr.RemoveRecentScenario(aRecent);
}

void wizard::StartupDialog::ClearRecents()
{
   wizRunMgr.ClearRecentScenarios();
}

const QList<QStringList>& wizard::StartupDialog::GetRecents() const
{
   return wizRunMgr.GetRecentScenarios();
}

QString wizard::StartupDialog::GetRecentLabelDisplayName(const QStringList& aFileList, bool aDisplayFullPath) const
{
   return wizRunMgr.GetScenarioDisplayName(aFileList, aDisplayFullPath);
}

void wizard::StartupDialog::BuildRecentContextMenu(QMenu& aMenu, const QStringList& aLink)
{
   connect(aMenu.addAction(u8"打开文件"),
           &QAction::triggered,
           [aLink]()
           {
              for (const auto& file : aLink)
              {
                 QDesktopServices::openUrl(QUrl::fromLocalFile(file));
              }
           });
}

void wizard::StartupDialog::PopulateLabels()
{
   mUi.recentsGroupBox->setTitle(u8"最近项目");
   mUi.newGroupBox->setTitle(u8"打开项目");
   mUi.filesLineEdit->setPlaceholderText(u8"拖放或输入想定文件...");
   mUi.appDesc->setText(u8"<p style=\"font - size:10pt; \">Wizard 是想定编辑器. 它可以用于查看想定 "
                        u8"启动虚拟或构建仿真，以及启动后处理工具.</p>");
   mUi.appIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/wizard_logo_icon.png")));
   //wizard图标
   mUi.buttonBox->button(QDialogButtonBox::Ok)->setText(u8"打开");
}

bool wizard::StartupDialog::ValidateSelection()
{
   // Check to see if all files were found
   for (const auto& file : mSelection)
   {
      QFileInfo info(file);
      if (!info.exists())
      {
         QMessageBox::warning(this, u8"文件未找到", u8"文件: " + file + u8" 未找到.");
         return false;
      }
   }
   return true;
}

QStringList wizard::StartupDialog::ParseDroppedUrls(const QList<QUrl>& urls) const
{
   QStringList filePaths;
   foreach (QUrl url, urls)
   {
      if (url.isLocalFile())
      {
         filePaths.push_back(url.toLocalFile());
      }
   }

   return filePaths;
}
