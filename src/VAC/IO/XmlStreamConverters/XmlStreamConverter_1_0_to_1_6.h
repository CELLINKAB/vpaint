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

#ifndef XMLSTREAMCONVERTER_1_0_TO_1_6_H
#define XMLSTREAMCONVERTER_1_0_TO_1_6_H

#include "../XmlStreamConverter.h"
#include "VAC/vpaint_global.h"

class Q_VPAINT_EXPORT XmlStreamConverter_1_0_to_1_6: public XmlStreamConverter
{
public:
    XmlStreamConverter_1_0_to_1_6(XmlStreamReader & in, XmlStreamWriter & out);

    void begin();
    void end();
    void pre();
    void post();
};

#endif // XMLSTREAMCONVERTER_1_0_TO_1_6_H
