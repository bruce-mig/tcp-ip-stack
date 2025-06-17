/*
 * =====================================================================================
 *
 *       Filename:  pkt_dump.c
 *
 *    Description:  This file implements the routine to dump packet content
 *                  field by field
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

#include "Layer2/layer2.h"
#include "tcpconst.h"
#include <stdio.h>

/* Implement below function to print all necessary headers
 * of the packet including :
 * Ethernet Hdr
 * ARP hdr
 * IP Hdr
 * For Unknown payload type (application data) , just
 * print the offset and size of payload in the frame.
 *
 * We shall be using below API to verify our code changes
 * are correct or not for catching early bugs !!
 * */

void pkt_dump(ethernet_hdr_t *ethernet_hdr, unsigned int pkt_size) {

   /*Assignment*/
}
