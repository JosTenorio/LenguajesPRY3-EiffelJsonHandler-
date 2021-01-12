case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C22"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH = 
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = jsonhandler$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C22_c.obj 

OLDOBJECTS =  li700.o li700d.o ar716.o ar716d.o re712.o re712d.o in696.o in696d.o \
	to714.o to714d.o ce722.o ce722d.o ce724.o ce724d.o dy711.o dy711d.o \
	cu702.o cu702d.o tr701.o tr701d.o se707.o se707d.o ar715.o ar715d.o \
	dy693.o dy693d.o bo713.o bo713d.o ta706.o ta706d.o co717.o co717d.o \
	li694.o li694d.o un710.o un710d.o ac703.o ac703d.o co697.o co697d.o \
	bi708.o bi708d.o fi698.o fi698d.o dy709.o dy709d.o ba704.o ba704d.o \
	co718.o co718d.o ch695.o ch695d.o rt720.o rt720d.o rt721.o rt721d.o \
	rt723.o rt723d.o rt725.o rt725d.o co705.o co705d.o bo699.o bo699d.o \
	in719.o in719d.o 

all: Cobj22.o

Cobj22.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj22.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

