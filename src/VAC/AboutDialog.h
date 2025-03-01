// Copyright (C) 2012-2019 The VPaint Developers.
// See the COPYRIGHT file at the top-level directory of this distribution
// and at https://github.com/dalboris/vpaint/blob/master/COPYRIGHT
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>
#include "VAC/vpaint_global.h"

class QLineEdit;
class QCheckBox;
class QNetworkAccessManager;
class QNetworkReply;
class QPushButton;

/// This class represents a QLineEdit associated with a QPushButton, where the
/// button is automatically clicked when the user presses Enter or Return from
/// the QLineEdit.
///
class Q_VPAINT_EXPORT PushLineEdit: public QWidget
{
    Q_OBJECT

public:
    PushLineEdit(QWidget * parent = nullptr);
    QPushButton * pushButton() const { return pushButton_; }
    QLineEdit * lineEdit() const { return lineEdit_; }

protected:
    void keyPressEvent(QKeyEvent * event) override;

private:
    QPushButton* pushButton_;
    QLineEdit* lineEdit_;
};

class Q_VPAINT_EXPORT AboutDialog: public QDialog
{
    Q_OBJECT

public:
    AboutDialog(bool showAtStartup);

    bool showAtStartup() const;

private slots:
    void processSignup_();
    void processFinished_();

private:
    QNetworkAccessManager * networkManager_;
    QNetworkReply * reply_;

    PushLineEdit * signup_;
    QCheckBox * showAtStartupCheckBox_;
};

#endif // ABOUTDIALOG_H
