/*
 *	$Id: xmalloc.h,v 1.1.1.1 2001/11/06 19:31:32 wol Exp $
 *
 *	Copyright (C) 2000-2002 Thomas Krennwallner <krennwallner@aon.at>
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation; either version 2 of the License, or
 *	(at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software
 *	Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
 *	USA.
 */



#ifndef _XMALLOC_H
#define _XMALLOC_H

#include <sys/types.h>


void *xmalloc (size_t n);


void *xrealloc (void *buf, size_t n);


void xfree (void *buf);


char *xstrdup (const char *str);


#endif /* _XMALLOC_H */