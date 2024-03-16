dnl Process this file with autoconf to produce a configure script.

dnl we need at least autoconf 2.52
AC_PREREQ([2.71])

AC_INIT
AC_CONFIG_SRCDIR([README])
AM_CONFIG_HEADER(config.h)
AC_CANONICAL_HOST

PACKAGE=wol
MAJOR=0
MINOR=7
MICRO=1
PATCH=
VERSION=$MAJOR.$MINOR.$MICRO$PATCH
AC_DEFINE_UNQUOTED(PACKAGE, "$PACKAGE")
AC_DEFINE_UNQUOTED(VERSION, "$VERSION")
AC_SUBST(PACKAGE)
AC_SUBST(VERSION)

dnl ready for automake
AM_INIT_AUTOMAKE($PACKAGE, $VERSION)
AC_USE_SYSTEM_EXTENSIONS


dnl check for programs
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_PROG_RANLIB
AC_PROG_AWK
AC_PATH_PROG(SED, sed, "")

do_pod2texi="no"
AC_PATH_PROG(PERL, perl, "")
if test x$PERL = x ; then
  AC_MSG_WARN([*** Unable to find perl. Disabling manpage creation ***])
else
  AC_PATH_PROG(P2M, pod2man, "")
  if test x$P2M = x ; then
     AC_MSG_WARN([*** Unable to find pod2man. Disabling manpage creation ***])
  else
     do_pod2texi="yes"
  fi
fi
AM_CONDITIONAL([POD2TEXI], [test x$do_pod2texi = xyes])

dnl i18n
ALL_LINGUAS="de fr it es sv"
AM_GNU_GETTEXT([external])

dnl create the Makefiles
AC_CONFIG_FILES([po/Makefile.in
Makefile
demo/Makefile
doc/Makefile
include/Makefile
m4/Makefile
src/Makefile
src/wol-dhcpdconf
src/wol-bootptab])
AC_CONFIG_COMMANDS([default],[chmod +x src/wol-dhcpdconf src/wol-bootptab],[])
AC_OUTPUT


dnl output configuration
echo "\

$PACKAGE $VERSION configuration:

	prefix: $prefix
	exec_prefix: $exec_prefix

	bindir: $bindir
	libdir: $libdir
	datadir: $datadir
	mandir: $mandir
	infodir: $infodir
	generate wol manpage: $do_pod2texi

	EXTRA_LIBS: $EXTRA_LIBS
"
