/*
 * =====================================================================================
 *
 *       Filename:  graph.h
 *
 *    Description:  This file contains the definition of all structures required
 *                   to create a NetworkGraph
 *
 *        Version:  1.0
 *        Created:  Monday 21 April 2025 12:41:36  CAT
 *       Revision:  1.0
 *       Compiler:  gcc
 *
 *         Author:  Bruce Migeri, Software Developer (BM), bmigeri@gmail.com
 *
 *       This file is part of the bruce-mig distribution
 * 		(https://github.com/bruce-mig). Copyright (c) 2025 Bruce Migeri. This
 * 		program is free software: you can redistribute it and/or modify it
 * 		under the terms of the GNU General Public License as published by the
 * 		Free Software Foundation, version 3.
 *
 *        This program is distributed in the hope that it will be useful, but
 *        WITHOUT ANY WARRANTY; without even the implied warranty of
 *        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *        General Public License for more details.
 *
 *        You should have received a copy of the GNU General Public License
 *        along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * =====================================================================================
 */

#include "gluethread/glthread.h"

typedef struct graph_ {
   char topology_name[32];
   glthread_t node_list;
} graph_t;