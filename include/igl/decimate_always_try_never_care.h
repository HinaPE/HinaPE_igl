// This file is part of libigl, a simple c++ geometry processing library.
// 
// Copyright (C) 2020 Alec Jacobson <alecjacobson@gmail.com>
// 
// This Source Code Form is subject to the terms of the Mozilla Public License 
// v. 2.0. If a copy of the MPL was not distributed with this file, You can 
// obtain one at http://mozilla.org/MPL/2.0/.
#ifndef IGL_DECIMATE_ALWAYS_TRY_NEVER_CARE_H
#define IGL_DECIMATE_ALWAYS_TRY_NEVER_CARE_H
#include "igl_inline.h"
#include "decimate_func_types.h"
namespace igl
{
  // Function to build trivial pre and post collapse actions. 
  //
  // Outputs:
  //   always_try  function that always returns true (always attempt the next
  //     edge collapse)
  //   never_care  fuction that is always a no-op (never have a post collapse
  //     response)
  IGL_INLINE void decimate_always_try_never_care(
    decimate_pre_collapse_func  & always_try,
    decimate_post_collapse_func & never_care);
};

#ifndef IGL_STATIC_LIBRARY
#  include "decimate_always_try_never_care.cpp"
#endif

#endif 

