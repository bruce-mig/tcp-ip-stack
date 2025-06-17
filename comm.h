/*
 * =====================================================================================
 *
 *       Filename:  comm.h
 *
 *    Description:  This file defines the structures to setup communication
 *                  between nodes of the topology
 *
 *        Version:  1.0
 *        Created:  Monday 09 June 2025 22:01:17  CAT
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

#ifndef __COMM__
#define __COMM__

#define MAX_PACKET_BUFFER_SIZE 2048

typedef struct node_ node_t;
typedef struct interface_ interface_t;

int send_pkt_to_self(char *pkt, unsigned int pkt_size, interface_t *interface);

/* API to send the packet out of the interface.
 * Nbr node must receive the packet on other end
 * of the link*/
int send_pkt_out(char *pkt, unsigned int pkt_size, interface_t *interface);

/*API to recv packet from interface*/
int pkt_receive(node_t *node, interface_t *interface, char *pkt,
                unsigned int pkt_size);

/* API to flood the packet out of all interfaces
 * of the node*/
int send_pkt_flood(node_t *node, interface_t *exempted_intf, char *pkt,
                   unsigned int pkt_size);

/*API to flood the pkt out of all L2 interface of the node*/
int send_pkt_flood_l2_intf_only(node_t *node, interface_t *exempted_intf,
                                char *pkt, unsigned int pkt_size);

#endif /* __COMM__ */
