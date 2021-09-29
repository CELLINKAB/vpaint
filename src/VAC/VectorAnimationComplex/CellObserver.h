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

#ifndef CELLOBSERVER_H
#define CELLOBSERVER_H

// Note: a cell observer can observe several cells
//       inheriting classes

#include "VAC/vpaint_global.h"

namespace VectorAnimationComplex
{

class Cell;

class Q_VPAINT_EXPORT CellObserver
{
public:
    CellObserver();

    void observe(Cell * cell);
    void unobserve(Cell * cell);

    virtual void observedCellDeleted(Cell *) {}
};

} // end namespace VectorAnimationComplex

#endif // CELLOBSERVER_H
