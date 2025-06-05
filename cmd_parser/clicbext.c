/*
 * =====================================================================================
 *
 *       Filename:  clicbext.c
 *
 *    Description:  This file contains all the functions which are extension to
 *                  libcli default Callbacks
 *
 *        Version:  1.0
 *        Created:  Thursday 22 May 2025 21:15:29  CAT
 *       Revision:  1.0
 *       Compiler:  gcc
 *
 *         Author:  BRUCE MIGERI, Software Developer (AS), bmigeri@gmail.com
 *
 *
 *        This file is part of the bruce-mig distribution
 *       (https://github.com/bruce-mig).
 *       Copyright (c) 2025 Bruce Migeri. This program
 *       is free software: you can redistribute it and/or modify it under the
 *       terms of the GNU General Public License as published by the Free
 *       Software Foundation, version 3.
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

#include "clicbext.h"
#include <stdio.h>
#include <stdlib.h>

void terminate_signal_handler() {

   /*-----------------------------------------------------------------------------
    *  Process has malfunctioned for some reason, user would like to see the
    * memory state of the process for debugging. This function triggers all the
    * show command one by one and write the output data to the file for future
    * reference.
    *  -----------------------------------------------------------------------------*/
   collect_supportsave_data();
   exit(0);
}

void collect_supportsave_data() {
   printf("%s() is called ...\n", __FUNCTION__);
}
