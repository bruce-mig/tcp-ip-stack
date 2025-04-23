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

#define NODE_NAME_SIZE 16
#define IF_NAME_SIZE 16
#define MAX_INTF_PER_NODE 10

/* Forward Declarations */
typedef struct node_ node_t;
typedef struct link_ link_t;

typedef struct interface_ {
   char if_name[IF_NAME_SIZE];
   struct node_ *att_node;
   struct link_ *link;
} interface_t;

struct link_ {
   interface_t intf1;
   interface_t intf2;
   unsigned int cost;
};

struct node_ {
   char node_name[NODE_NAME_SIZE];
   interface_t *intf[MAX_INTF_PER_NODE];
   glthread_t graph_glue;
};

typedef struct graph_ {
   char topology_name[32];
   glthread_t node_list;
};