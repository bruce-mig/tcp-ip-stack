/*
 * =====================================================================================
 *
 *       Filename:  tcp_public.h
 *
 *    Description:  This file contains routines and structures which should be
 *                   exposed to the application for use
 *
 *        Version:  1.0
 *        Created:  Tuesday 18 June 2025 20:12:17  CAT
 *       Revision:  1.0
 *       Compiler:  gcc
 *
 *         Author:  BRUCE MIGERI, Networking Developer (BM), bmigeri@gmail.com
 *
 *        This file is part of the bruce-mig distribution
 *        (https://github.com/bruce-mig).
 *        Copyright (c) 2025 Bruce Migeri.
 *        This program is free software: you can redistribute it and/or modify
 *        it under the terms of the GNU General Public License as published by
 *        the Free Software Foundation, version 3.
 *
 *        This program is distributed in the hope that it will be useful, but
 *        WITHOUT ANY WARRANTY; without even the implied warranty of
 *        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *        General Public License for more details.
 *
 *        You should have received a copy of the GNU General Public License
 *        along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * =====================================================================================
 */

#ifndef __TCP_IP_STACK__
#define __TCP_IP_STACK__

#include "Layer2/layer2.h"
#include "Layer3/layer3.h"
#include "cmd_parser/cmdtlv.h"
#include "cmd_parser/libcli.h"
#include "cmdcodes.h"
#include "comm.h"
#include "gluethread/glthread.h"
#include "graph.h"
#include "net.h"
#include "tcpconst.h"
#include "utils.h"
#include <arpa/inet.h> /*for inet_ntop & inet_pton*/
#include <assert.h>
#include <stdint.h>

extern graph_t *topo;

#endif /* __TCP_IP_STACK__ */
