/*
 * =====================================================================================
 *
 *       Filename:  libcliid.h
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  Thursday 22 May 2025 21:15:29  CAT
 *       Revision:  1.0
 *       Compiler:  gcc
 *
 *         Author:  BRUCE MIGERI, Software Developer (BM), bmigeri@gmail.com
 *
 *
 * =====================================================================================
 */

#ifndef __LIBCLIID__
#define __LIBCLIID__

typedef enum {
   CONFIG_DISABLE,
   CONFIG_ENABLE,
   OPERATIONAL,
   MODE_UNKNOWN
} op_mode;

typedef enum {
   INT,
   STRING,
   IPV4,
   FLOAT,
   IPV6,
   BOOLEAN,
   INVALID,
   LEAF_MAX
} leaf_type_t;

#endif
