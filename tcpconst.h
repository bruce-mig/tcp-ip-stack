/*
 * =====================================================================================
 *
 *       Filename:  tcpconst.h
 *
 *    Description:  This file defines all standard Constants used by TCPIP stack
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

#ifndef __TCPCONST__
#define __TCPCONST__

/*Specified in ethernet_hdr->type*/
#define ARP_BROAD_REQ 1
#define ARP_REPLY 2
#define ARP_MSG 806
#define BROADCAST_MAC 0xFFFFFFFFFFFF
#define ETH_IP 0x0800
#define ICMP_PRO 1
#define ICMP_ECHO_REQ 8
#define ICMP_ECHO_REP 0
#define MTCP 20
#define USERAPP1 21
#define VLAN_8021Q_PROTO 0x8100
#define IP_IN_IP 4
#endif /* __TCPCONST__ */
