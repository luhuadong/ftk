/*
 * File: ftk_win32.h
 * Author:  Li XianJing <xianjimli@hotmail.com>
 * Brief:   win32 specific functions.
 *
 * Copyright (c) 2009  Li XianJing <xianjimli@hotmail.com>
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 * History:
 * ================================================================
 * 2009-11-22 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#ifndef FTK_WIN32_H
#define FTK_WIN32_H

#ifdef WIN32
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <io.h>
#include <windows.h>
#define HAVE_BOOLEAN
int win32_socketpair(SOCKET socks[2], int make_overlapped);
#define inline 
//#define HAS_PNG 1
//#define HAS_JPEG 1
#define __func__ __FILE__
#define FTK_ROOT_DIR "D:\\lab\\ftk"
#define FTK_FONT     "\\unicode.fnt"
#define DATA_DIR       FTK_ROOT_DIR
#define LOCAL_DATA_DIR FTK_ROOT_DIR
#define FTK_DATA_ROOT  FTK_ROOT_DIR"\\data"
#define TESTDATA_DIR   FTK_ROOT_DIR"\\testdata"
#define usleep Sleep
#define pipe(fds) win32_socketpair(fds, 0)
#define pipe_write(s, buf, len) send(s, buf, len, 0)
#define pipe_read(s, buf, len) recv(s, buf, len, 0)

//_pipe(fds, 8092, 0)

struct timezone {
	int tz_minuteswest;     /* minutes west of Greenwich */
	int tz_dsttime;         /* type of DST correction */
};

char* ftk_strncpy(char *dest, const char *src, size_t n);
char* ftk_strdup(const char *s);
int   ftk_snprintf(char *str, size_t size, const char *format, ...);
int   ftk_vsnprintf(char *str, size_t size, const char *format, va_list ap);
int   gettimeofday(struct timeval *tv, struct timezone *tz);

#endif

#endif/*FTK_WIN32_H*/

