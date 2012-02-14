// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef _POSTDATA_CPPTOC_H
#define _POSTDATA_CPPTOC_H

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else // BUILDING_CEF_SHARED

#include "include/cef.h"
#include "include/cef_capi.h"
#include "libcef_dll/cpptoc/cpptoc.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefPostDataCppToC
    : public CefCppToC<CefPostDataCppToC, CefPostData, cef_post_data_t>
{
public:
  CefPostDataCppToC(CefPostData* cls);
  virtual ~CefPostDataCppToC() {}
};

#endif // BUILDING_CEF_SHARED
#endif // _POSTDATA_CPPTOC_H

