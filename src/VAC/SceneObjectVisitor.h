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

#ifndef SCENEOBJECTVISITOR_H
#define SCENEOBJECTVISITOR_H

#include "VAC/vpaint_global.h"

namespace VectorAnimationComplex { class VAC; }

class Q_VPAINT_EXPORT SceneObjectVisitor
{
public:
    SceneObjectVisitor();

    virtual void visit(VectorAnimationComplex::VAC * vac)=0;
};

#endif // SCENEOBJECTVISITOR_H
