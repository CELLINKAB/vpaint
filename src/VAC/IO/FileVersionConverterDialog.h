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

#ifndef FILEVERSIONCONVERTERDIALOG_H
#define FILEVERSIONCONVERTERDIALOG_H

#include <QDialog>
#include "VAC/vpaint_global.h"

class QCheckBox;

class Q_VPAINT_EXPORT FileVersionConverterDialog: public QDialog
{
    Q_OBJECT

public:
    FileVersionConverterDialog(QWidget * parent,
                               const QString & fileName,
                               const QString & backupName);

private slots:
    void keepOldVersionToggled(bool checked);
    void dontNotifyConversionToggled(bool checked);
};

#endif // FILEVERSIONCONVERTERDIALOG_H
