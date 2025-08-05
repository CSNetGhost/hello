// ****************************************************************************
// CUI
//
// The Advanced Framework for Simulation, Integration, and Modeling (AFSIM)
//
// Copyright 2017 Infoscitex, a DCS Company. All rights reserved.
//
// The use, dissemination or disclosure of data in this file is subject to
// limitation or restriction. See accompanying README and LICENSE for details.
// ****************************************************************************

#include "RvStartupDialog.hpp"

#include "RvRunManager.hpp"

rv::StartupDialog::StartupDialog(QString& aRecordingFile, QWidget* aParent, Qt::WindowFlags aFlags /*= Qt::WindowFlags()*/)
   : wkf::StartupDialog<QString>(aRecordingFile, aParent, aFlags)
{
   mDocLinks = {{"mystic.html", "Main Page"},
                {"mystic_users_guide.html", "User's Guide"},
                {"mystic_reference_guide.html", "Reference Guide"},
                {"mystic_change_log.html", "Change Log"},
                {"event_pipe.html", "Event Pipe"},
                {"main_page.html", "AFSIM Main Page"}};
}

QString rv::StartupDialog::Browse()
{
   // If we have a previous recording, open the Browse Recording dialog to the same directory that recording is in.
   QString directory = RunManager::GetInstance().GetMostRecentDirectory();

   return QFileDialog::getOpenFileName(this, "Select Recording File", directory, "AFSIM Event Recording (*.aer);;");
}

void rv::StartupDialog::RemoveRecent(const QString& aRecent)
{
   RunManager::GetInstance().RemoveRecentRecording(aRecent);
}

void rv::StartupDialog::ClearRecents()
{
   RunManager::GetInstance().ClearRecentRecordings();
}

const QList<QString>& rv::StartupDialog::GetRecents() const
{
   return RunManager::GetInstance().GetRecentRecordings();
}

QString rv::StartupDialog::GetRecentLabelDisplayName(const QString& aFile, bool aDisplayFullPath) const
{
   return RunManager::GetInstance().GetRecordingDisplayName(aFile, aDisplayFullPath);
}

void rv::StartupDialog::PopulateLabels()
{
   mUi.recentsGroupBox->setTitle(u8"近期录制");
   mUi.newGroupBox->setTitle(u8"新录制");
   mUi.filesLineEdit->setPlaceholderText(u8"拖放或输入想定文件...");
   mUi.appDesc->setText(u8"<p style=\"font - size:10pt;\">Mystic是一款用于将录制内容进行可视化展示的工具。"
                        u8"这是基于 AFSIM 模拟事件的管道结果。它读取了 AFSIM 事件记录（AER）文件。"
                        u8"通过模拟生成数据，并将其以地理方式呈现出来。</p>");
   mUi.appIcon->setPixmap(QPixmap(":/images/Splash_AFSIM_Mystic_BW_SM.png"));
   mUi.buttonBox->button(QDialogButtonBox::Ok)->setText(u8"打开");
}

bool rv::StartupDialog::ValidateSelection()
{
   // Check to see if file was found
   QFileInfo info(mSelection);
   if (!info.exists())
   {
      QMessageBox::warning(this, u8"未找到文件", u8"文件: " + mSelection + u8"未找到");
      return false;
   }
   return true;
}

QString rv::StartupDialog::ParseDroppedUrls(const QList<QUrl>& urls) const
{
   return urls.front().toLocalFile();
}
