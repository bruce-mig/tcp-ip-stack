/*
 * =====================================================================================
 *
 *       Filename:  testapp.c
 *
 *    Description:  This file represents the Test application to test graph
 *                  topology creation
 *
 **        Version:  1.0
 *        Created:  Thursday 24 April 2025 20:16:17  CAT
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
 *
 * =====================================================================================
 */

#include "cmd-parser/libcli.h"
#include "graph.h"
#include <stdio.h>

extern graph_t *build_first_topo();
extern graph_t *build_simple_l2_switch_topo();
extern graph_t *build_square_topo();
extern graph_t *build_linear_topo();
extern graph_t *build_dualswitch_topo();
extern graph_t *linear_3_node_topo();
extern graph_t *L2_loop_topo();
extern void nw_init_cli();

graph_t *topo = NULL;

int main(int argc, char **argv) {

   nw_init_cli();
   show_help_handler(0, 0, MODE_UNKNOWN);
   topo = build_square_topo();
   start_shell();
   return 0;
}
