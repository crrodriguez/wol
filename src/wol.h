/*
 *	wol - wake on lan client
 *
 *	$Id: wol.h,v 1.2 2001/11/21 05:33:37 wol Exp $
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


#ifndef _WOL_H
#define _WOL_H

#include <locale.h>

/* i18n support */
#include <libintl.h>
#define _(Text) gettext(Text)


#define DEFAULT_PORT 40000
#define DEFAULT_IPADDR "255.255.255.255"


#endif /* _WOL_H */
