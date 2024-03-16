DEFS = -DLOCALEDIR=\"$(datadir)/locale\" @DEFS@
AM_CPPFLAGS = -I$(top_srcdir)/include -I$(top_srcdir)/lib -I$(top_srcdir)/intl
AM_CFLAGS = -Wall -Wextra -fvisibility=hidden 
bin_PROGRAMS = wol
bin_SCRIPTS = wol-dhcpdconf wol-bootptab
wol_SOURCES = wol.c macfile.c net.c magic.c proxy.c md5.c
wol_LDADD = @LIBINTL@

MAINTAINERCLEANFILES = Makefile.in
