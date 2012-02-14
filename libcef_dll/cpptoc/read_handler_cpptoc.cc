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

#include "libcef_dll/cpptoc/read_handler_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

size_t CEF_CALLBACK read_handler_read(struct _cef_read_handler_t* self,
    void* ptr, size_t size, size_t n)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: ptr; type: simple_byaddr
  DCHECK(ptr);
  if (!ptr)
    return 0;

  // Execute
  size_t _retval = CefReadHandlerCppToC::Get(self)->Read(
      ptr,
      size,
      n);

  // Return type: simple
  return _retval;
}


int CEF_CALLBACK read_handler_seek(struct _cef_read_handler_t* self,
    long offset, int whence)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefReadHandlerCppToC::Get(self)->Seek(
      offset,
      whence);

  // Return type: simple
  return _retval;
}


long CEF_CALLBACK read_handler_tell(struct _cef_read_handler_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  long _retval = CefReadHandlerCppToC::Get(self)->Tell();

  // Return type: simple
  return _retval;
}


int CEF_CALLBACK read_handler_eof(struct _cef_read_handler_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefReadHandlerCppToC::Get(self)->Eof();

  // Return type: simple
  return _retval;
}



// CONSTRUCTOR - Do not edit by hand.

CefReadHandlerCppToC::CefReadHandlerCppToC(CefReadHandler* cls)
    : CefCppToC<CefReadHandlerCppToC, CefReadHandler, cef_read_handler_t>(cls)
{
  struct_.struct_.read = read_handler_read;
  struct_.struct_.seek = read_handler_seek;
  struct_.struct_.tell = read_handler_tell;
  struct_.struct_.eof = read_handler_eof;
}

#ifndef NDEBUG
template<> long CefCppToC<CefReadHandlerCppToC, CefReadHandler,
    cef_read_handler_t>::DebugObjCt = 0;
#endif

