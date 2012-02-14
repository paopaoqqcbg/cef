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

#include "libcef_dll/cpptoc/domdocument_cpptoc.h"
#include "libcef_dll/cpptoc/domevent_cpptoc.h"
#include "libcef_dll/cpptoc/domnode_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

cef_string_userfree_t CEF_CALLBACK domevent_get_type(
    struct _cef_domevent_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefDOMEventCppToC::Get(self)->GetType();

  // Return type: string
  return _retval.DetachToUserFree();
}


enum cef_dom_event_category_t CEF_CALLBACK domevent_get_category(
    struct _cef_domevent_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return DOM_EVENT_CATEGORY_UNKNOWN;

  // Execute
  cef_dom_event_category_t _retval = CefDOMEventCppToC::Get(self)->GetCategory(
      );

  // Return type: simple
  return _retval;
}


enum cef_dom_event_phase_t CEF_CALLBACK domevent_get_phase(
    struct _cef_domevent_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return DOM_EVENT_PHASE_UNKNOWN;

  // Execute
  cef_dom_event_phase_t _retval = CefDOMEventCppToC::Get(self)->GetPhase();

  // Return type: simple
  return _retval;
}


int CEF_CALLBACK domevent_can_bubble(struct _cef_domevent_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefDOMEventCppToC::Get(self)->CanBubble();

  // Return type: bool
  return _retval;
}


int CEF_CALLBACK domevent_can_cancel(struct _cef_domevent_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefDOMEventCppToC::Get(self)->CanCancel();

  // Return type: bool
  return _retval;
}


cef_domdocument_t* CEF_CALLBACK domevent_get_document(
    struct _cef_domevent_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDOMDocument> _retval = CefDOMEventCppToC::Get(self)->GetDocument(
      );

  // Return type: refptr_same
  return CefDOMDocumentCppToC::Wrap(_retval);
}


cef_domnode_t* CEF_CALLBACK domevent_get_target(struct _cef_domevent_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDOMNode> _retval = CefDOMEventCppToC::Get(self)->GetTarget();

  // Return type: refptr_same
  return CefDOMNodeCppToC::Wrap(_retval);
}


cef_domnode_t* CEF_CALLBACK domevent_get_current_target(
    struct _cef_domevent_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDOMNode> _retval = CefDOMEventCppToC::Get(
      self)->GetCurrentTarget();

  // Return type: refptr_same
  return CefDOMNodeCppToC::Wrap(_retval);
}



// CONSTRUCTOR - Do not edit by hand.

CefDOMEventCppToC::CefDOMEventCppToC(CefDOMEvent* cls)
    : CefCppToC<CefDOMEventCppToC, CefDOMEvent, cef_domevent_t>(cls)
{
  struct_.struct_.get_type = domevent_get_type;
  struct_.struct_.get_category = domevent_get_category;
  struct_.struct_.get_phase = domevent_get_phase;
  struct_.struct_.can_bubble = domevent_can_bubble;
  struct_.struct_.can_cancel = domevent_can_cancel;
  struct_.struct_.get_document = domevent_get_document;
  struct_.struct_.get_target = domevent_get_target;
  struct_.struct_.get_current_target = domevent_get_current_target;
}

#ifndef NDEBUG
template<> long CefCppToC<CefDOMEventCppToC, CefDOMEvent,
    cef_domevent_t>::DebugObjCt = 0;
#endif

