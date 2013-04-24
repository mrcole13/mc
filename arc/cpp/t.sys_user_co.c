.//============================================================================
.// Notice:
.// (C) Copyright 1998-2013 Mentor Graphics Corporation
.//     All rights reserved.
.//
.// This document contains confidential and proprietary information and
.// property of Mentor Graphics Corp.  No part of this document may be
.// reproduced without the express written permission of Mentor Graphics Corp.
.//============================================================================
.//
.//
/*----------------------------------------------------------------------------
 * File:  ${te_file.callout}.${te_file.src_file_ext}
 *
 * Description:
 * Function definitions for user supplied (non-translated) call out entry
 * points in the generated application.
 *
 * ${te_copyright.body}
 *--------------------------------------------------------------------------*/

#include "${te_file.types}.${te_file.hdr_file_ext}"
#include "${te_file.callout}.${te_file.hdr_file_ext}"

#ifdef SYS_USER_CO_PRINTF_ON
#include <stdio.h>
#define SYS_USER_CO_PRINTF( s ) printf( s );
#else
#define SYS_USER_CO_PRINTF( s )
#endif

/*
 * ${te_callout.initialization}
 *
 * This function is invoked at the immediate beginning of application
 * initialization. It is the very first function to be executed at system
 * startup.
 * User supplied implementation of this function should be restricted to
 * things like memory initialization, early hardware duties, etc.
 */
void
${te_callout.initialization}f( void )
{
/* Activate this invocation to initialize the example simple TIM.  */
  #if ${te_tim.max_timers} > 0
  TIM::TIM_init();
  #endif
  /* Insert implementation specific code here.  */
  SYS_USER_CO_PRINTF( "${te_callout.initialization}\n" )
}

/*
 * ${te_callout.pre_xtUML_initialization}
 *
 * This function is invoked immediately prior to executing any xtUML
 * initialization functions.
 */
void
${te_callout.pre_xtUML_initialization}f( void )
{
  /* Insert implementation specific code here.  */
  SYS_USER_CO_PRINTF( "${te_callout.pre_xtUML_initialization}\n" )
}

/*
 * ${te_callout.post_xtUML_initialization}
 *
 * This function is invoked immediately after executing any xtUML
 * initialization functions.
 * When this callout function returns, the system dispatcher will allow the
 * xtUML application analysis state models to start consuming events.
 */
void
${te_callout.post_xtUML_initialization}f( void )
{
  /* Insert implementation specific code here.  */
  SYS_USER_CO_PRINTF( "${te_callout.post_xtUML_initialization}\n" )
}

/*
 * ${te_callout.background_processing}
 *
 * This function is invoked once during each loop execution of the system
 * dispather.
 * It is invoked at the 'top' of the system dispatcher loop, immediately
 * prior to dispatching any xtUML application analysis events.
 */
void
${te_callout.background_processing}f( void )
{
/* Activate this invocation to periodically tick the example simple TIM.  */
  #if ${te_tim.max_timers} > 0
  TIM::TIM_tick();
  #endif
  /* Insert implementation specific code here.  */
}

/*
 * ${te_callout.pre_shutdown}
 *
 * This function is invoked at termination of the system dispatcher, but
 * prior to performing any xtUML application analysis shutdown sequencing.
 */
void
${te_callout.pre_shutdown}f( void )
{
  /* Insert implementation specific code here.  */
  SYS_USER_CO_PRINTF( "${te_callout.pre_shutdown}\n" )
}

/*
 * ${te_callout.post_shutdown}
 *
 * This function is invoked immediately before application exit.
 */
void
${te_callout.post_shutdown}f( void )
{
  /* Insert implementation specific code here.  */
  SYS_USER_CO_PRINTF( "${te_callout.post_shutdown}\n" )
}

/*
 * ${te_callout.event_cant_happen}
 *
 * This function is invoked any time that an event is received that
 * results in a "cant happen" transition.
 */
void
${te_callout.event_cant_happen}f(
  const ${te_typemap.state_number_name} current_state,
  const ${te_typemap.state_number_name} next_state,
  const ${te_typemap.event_number_name} event_number )
{
  /* Insert implementation specific code here.  */
  SYS_USER_CO_PRINTF( "${te_callout.event_cant_happen}\n" )
}

/*
 * ${te_callout.event_no_instance}
 *
 * This function is invoked when we failed to validate the instance
 * to which an event was directed.  This can happen in normal operation
 * when the instance was deleted while the event was in flight (analysis
 * error).
 */
void
${te_callout.event_no_instance}f(
  const ${te_typemap.event_number_name} event_number )
{
  /* Insert implementation specific code here.  */
  SYS_USER_CO_PRINTF( "${te_callout.event_no_instance}\n" )
}

/*
 * ${te_callout.event_free_list_empty}
 *
 * This function is invoked when an attempt is made to allocate an
 * event, but there are no more left.
 */
void
${te_callout.event_free_list_empty}f( void )
{
  /* Insert implementation specific code here.  */
  SYS_USER_CO_PRINTF( "${te_callout.event_free_list_empty}\n" )
}

/*
 * ${te_callout.empty_handle_detected}
 *
 * This function is invoked when an attempt is made to use an instance
 * reference variable (handle) that is null (empty).
 */
void
${te_callout.empty_handle_detected}f( c_t * object_keyletters, c_t * s )
{
  /* Insert implementation specific code here.  */
  SYS_USER_CO_PRINTF( "${te_callout.empty_handle_detected}\n" )
}

/*
 * ${te_callout.object_pool_empty}
 *
 * This function is invoked when an attempt is made to create an
 * instance of an object, but there are no instances available.
 */
void
${te_callout.object_pool_empty}f( c_t * domain, c_t * object_name )
{
  /* Insert implementation specific code here.  */
  SYS_USER_CO_PRINTF( "${te_callout.object_pool_empty}\n" )
}

/*
 * ${te_callout.node_list_empty}
 *
 * This function is invoked when an attempt is made to allocate a
 * node, but there are no more left.
 */
void
${te_callout.node_list_empty}f( void )
{
  /* Insert implementation specific code here.  */
  SYS_USER_CO_PRINTF( "${te_callout.node_list_empty}\n" )
}

/*
 * ${te_callout.interleaved_bridge_overflow}
 *
 * This function is invoked when an attempt is made to post too many
 * interleaved bridges.  The depth of this list is defined by
 * SYS_MAX_INTERLEAVED_BRIDGES (unless changed in the archetype).
 */
void
${te_callout.interleaved_bridge_overflow}f( void )
{
  /* Insert implementation specific code here.  */
  SYS_USER_CO_PRINTF( "${te_callout.interleaved_bridge_overflow}\n" )
}

/*
 * ${te_callout.self_event_queue_empty}
 *
 * This function is invoked when the events to self queue is
 * interrogated and found to be empty.
 */
void
${te_callout.self_event_queue_empty}f( void )
{
  /* Insert implementation specific code here.  */
}

/*
 * ${te_callout.non_self_event_queue_empty}
 *
 * This function is invoked when the events to instance queue is
 * interrogated and found to be empty.
 */
void
${te_callout.non_self_event_queue_empty}f( void )
{
  /* Insert implementation specific code here.  */
}

/*
 * ${te_callout.persistence_error}
 *
 * This function is invoked when the events to instance queue is
 * interrogated and found to be empty.
 */
void
${te_callout.persistence_error}f( i_t error_code )
{
  /* Insert implementation specific code here.  */
  SYS_USER_CO_PRINTF( "${te_callout.persistence_error}\n" )
}
.//
