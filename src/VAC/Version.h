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

#ifndef VERSION_H
#define VERSION_H

#include <QString>
#include "VAC/vpaint_global.h"

class Q_VPAINT_EXPORT Version
{
public:
    Version(short major = 0, short minor = 0, short patch = 0): major_(major), minor_(minor), patch_(patch) {}
    Version(const QString & str);

    QString toString(bool ignorePatch = false);

    short getMajor() const;
    short getMinor() const;
    short getPatch() const;

    void setMajor(short val);
    void setMinor(short val);
    void setPatch(short val);

    // Comparison operators
    inline bool operator==(const Version& other) const { return getMajor() == other.getMajor() && getMinor() == other.getMinor() && getPatch() == other.getPatch(); }
    bool operator< (const Version& other) const;
    inline bool operator!=(const Version& other) const { return !((*this)==other); }
    inline bool operator> (const Version& other) const { return other<(*this); }
    inline bool operator<=(const Version& other) const { return !(other<(*this)); }
    inline bool operator>=(const Version& other) const { return !((*this)<other); }

private:
    short major_, minor_, patch_;
};

#endif // VERSION_H
