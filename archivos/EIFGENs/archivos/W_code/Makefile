INCLUDE_PATH = 
SHELL = /bin/sh
CC = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/mingw/bin/gcc"
CPP = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/mingw/bin/gcc"
CFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/studio/spec/win64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/studio/spec/win64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   -mconsole
LDSHAREDFLAGS =  
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/studio/spec/win64/lib/mingw/mtwkbench.a"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/studio/config/win64/templates
LIBS = 
MAKE = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/msys/1.0/bin/make.exe"
AR = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/mingw/bin/ar"
LD = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/mingw/bin/ld"
MKDEP =   --
MV = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/msys/1.0/bin/cp"
CP = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/msys/1.0/bin/cp"
RANLIB = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/mingw/bin/ranlib.exe"
RM = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/msys/1.0/bin/rm" -f
FILE_EXIST = 
RMDIR = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/msys/1.0/bin/rd"
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/studio/spec/win64/bin/x2c.exe"
SHAREDLINK = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/mingw/bin/dllwrap"
SHAREDLIBS = -luser32 -lws2_32 -ladvapi32 -lgdi32 -lshell32 -lmsimg32 -lcomdlg32 -luuid -lole32 -loleaut32 -lcomctl32 -lmpr -lshlwapi -lwinspool -lstdc++ 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/msys/1.0/bin/touch" finished
PATH := C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/mingw/libexec/gcc/x86_64-w64-mingw32/4.4.5;C:\Program Files\Python38\Scripts\;C:\Program Files\Python38\;C:\Program Files (x86)\Common Files\Oracle\Java\javapath;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files\Java\jdk-14.0.2\bin;C:\Program Files\Microsoft SQL Server\130\Tools\Binn\;C:\Program Files\Microsoft SQL Server\Client SDK\ODBC\170\Tools\Binn\;C:\Program Files (x86)\Microsoft SQL Server\150\DTS\Binn\;C:\Program Files\Microsoft SQL Server\150\DTS\Binn\;C:\Program Files (x86)\Microsoft SQL Server\150\Tools\Binn\;C:\Program Files\Microsoft SQL Server\150\Tools\Binn\;C:\Program Files (x86)\Microsoft SQL Server\110\DTS\Binn\;C:\Program Files (x86)\Microsoft SQL Server\120\DTS\Binn\;C:\Program Files (x86)\Microsoft SQL Server\130\DTS\Binn\;C:\Program Files (x86)\Microsoft SQL Server\140\DTS\Binn\;C:\Program Files\Git\cmd;C:\Program Files\MiKTeX\miktex\bin\x64\;C:\ProgramData\chocolatey\bin;C:\Program Files\nodejs\;C:\Program Files\swipl\bin;C:\Program Files\dotnet\;C:\Users\JOS\AppData\Local\Microsoft\WindowsApps;C:\Program Files\JetBrains\PyCharm Community Edition 2020.1.3\bin;;C:\Users\JOS\AppData\Roaming\cabal\bin;C:\ProgramData\chocolatey\lib\ghc\tools\ghc-8.10.2\bin;C:\tools\msys64;;C:\Users\JOS\AppData\Local\Programs\Microsoft VS Code\bin;C:\Users\JOS\AppData\Roaming\npm;C:\Users\JOS\.dotnet\tools 
SYSTEM_IN_DYNAMIC_LIB = archivos.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

SUBDIRS = C1 E1

EXTERNALS = 

all:: archivos.exe
	echo done > completed.eif

C1/Cobj1.o: Makefile E1/estructure.h
	cd C1 && $(START_TEST) $(MAKE) Cobj1.o $(END_TEST) && cd ..

E1/emain.o:  Makefile E1/Makefile
	$(CP) "$(EIFTEMPLATES)/emain.template" "E1/emain.c"
	cd E1 && $(START_TEST) $(MAKE) emain.o  $(END_TEST) && cd ..

E1/eoption.o : Makefile E1/Makefile E1/estructure.h
	cd E1 && $(START_TEST) $(MAKE) eoption.o  $(END_TEST) && cd ..

E1/epattern.o : Makefile E1/Makefile E1/estructure.h
	cd E1 && $(START_TEST) $(MAKE) epattern.o  $(END_TEST) && cd ..

E1/efrozen.o : Makefile E1/Makefile E1/estructure.h
	cd E1 && $(START_TEST) $(MAKE) efrozen.o  $(END_TEST) && cd ..

E1/ecall.o : Makefile E1/Makefile E1/estructure.h
	cd E1 && $(START_TEST) $(MAKE) ecall.o  $(END_TEST) && cd ..

E1/eplug.o : Makefile E1/Makefile E1/estructure.h
	cd E1 && $(START_TEST) $(MAKE) eplug.o  $(END_TEST) && cd ..

E1/eskelet.o : Makefile E1/Makefile E1/estructure.h
	cd E1 && $(START_TEST) $(MAKE) eskelet.o  $(END_TEST) && cd ..

E1/enames.o : Makefile E1/Makefile E1/estructure.h
	cd E1 && $(START_TEST) $(MAKE) enames.o  $(END_TEST) && cd ..

E1/evisib.o : Makefile E1/Makefile E1/estructure.h
	cd E1 && $(START_TEST) $(MAKE) evisib.o  $(END_TEST) && cd ..

E1/ececil.o : Makefile E1/Makefile E1/estructure.h
	cd E1 && $(START_TEST) $(MAKE) ececil.o  $(END_TEST) && cd ..

E1/einit.o : Makefile E1/Makefile E1/estructure.h
	cd E1 && $(START_TEST) $(MAKE) einit.o  $(END_TEST) && cd ..

E1/eparents.o : Makefile E1/Makefile E1/estructure.h
	cd E1 && $(START_TEST) $(MAKE) eparents.o  $(END_TEST) && cd ..

OBJECTS = E1/eparents.o  E1/einit.o  E1/ececil.o  E1/evisib.o  E1/enames.o  E1/eskelet.o  E1/eplug.o  E1/ecall.o  E1/efrozen.o  E1/epattern.o  E1/eoption.o  C1/Cobj1.o 

C_OBJECTS = C1/Cobj1.o 

EOBJECTS = E1/eparents.o  E1/einit.o  E1/ececil.o  E1/evisib.o  E1/enames.o  E1/eskelet.o  E1/eplug.o  E1/ecall.o  E1/efrozen.o  E1/epattern.o  E1/eoption.o  

PRECOMP_OBJECTS= "c:\users\jos\documents\eiffel user files\20.05\precomp\spec\win64\EIFGENs\base-scoop-safe\W_code/mingw/precomp.lib"


archivos.exe: E1/emain.o $(OBJECTS) archivos.res 
	$(COMMAND_MAKEFILE)
	$(RM) $@
	$(CC) $(LDFLAGS) $(CCLDFLAGS) -o archivos.exe E1/emain.o $(PRECOMP_OBJECTS) archivos.res $(OBJECTS)  $(EIFLIB) -luser32 -lws2_32 -ladvapi32 -lgdi32 -lshell32 -lmsimg32 -lcomdlg32 -luuid -lole32 -loleaut32 -lcomctl32 -lmpr -lshlwapi -lwinspool -lstdc++ $(ISE_SHAREDLIBS)

../../../archivos.rc:
	if [ ! -f ../../../archivos.rc ] ; then $(MV) "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/studio/config/win64/mingw/eiffel.rc" ../../../archivos.rc ; fi 

archivos.res: ../../../archivos.rc Makefile
	"C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/mingw/bin/windres" --preprocessor='"C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/mingw/bin/cpp.exe"' -I../../.. ../../../archivos.rc -O coff -o archivos.res

RCECIL = MTdebug.o MTidrs.o MTinterp.o mtipc.o MTnetwork.o MTupdate.o \
	MTwargv.o MTwbench.o MTwboolstr.o MTwcecil.o MTwcompress.o \
	MTwconsole.o MTwcopy.o MTwdir.o MTweif_project.o MTweif_threads.o \
	MTweif_type_id.o MTwequal.o MTwerror.o MTweveqs.o MTwexcept.o  \
	MTwfile.o MTwgarcol.o MTwgen_conf.o MTwhash.o MTwhashin.o MTwhector.o \
	MTwinternal.o MTwlmalloc.o MTwlocal.o MTwmain.o MTwmalloc.o \
	MTwmemory.o MTwmemory_analyzer.o MTwmisc.o MTwnotify_token.o \
	MTwobject_id.o MTwoffset.o MTwoption.o MTwout.o MTwpath_name.o \
	MTwplug.o MTwposix_threads.o MTwprivate_queue.o MTwprocessor.o \
	MTwprocessor_registry.o MTwqueue_cache.o MTwreq_grp.o MTwretrieve.o \
	MTwrout_obj.o MTwrun_idr.o MTwscoop.o MTwscoop_gc.o MTwsearch.o \
	MTwsig.o MTwstore.o MTwtimer.o MTwtools.o MTwtraverse.o MTwumain.o \
	MTwurgent.o 


#STATIC_CECIL PART
STATIC_CECIL = libarchivos.o
cecil: $(STATIC_CECIL)
$(STATIC_CECIL): $(OBJECTS)
	$(AR) x $(EIFLIB)
	$(AR) rc $(STATIC_CECIL) $(OBJECTS) $(EXTERNALS) $(PRECOMP_OBJECTS) $(RCECIL)
	$(RANLIB) $(STATIC_CECIL)
	$(RM) $(RCECIL)



#SHARED_CECIL PART
SHARED_CECIL = libarchivos$(SHARED_SUFFIX)
dynamic_cecil: $(SHARED_CECIL) 
DEF_FILE= c_archivos.def 
c_archivos.def: 
	$(RM) $@
	@echo LIBRARY libarchivos.dll > $@
	@type "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/studio/config/win64/templates/cecil.def" >> $@

SHARED_CECIL_OBJECT = $(OBJECTS) \
		E1/emain.o
SHAREDFLAGS = $(LDSHAREDFLAGS) \
\
	--dlltool-name "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/mingw/bin/dlltool" \
	--as "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/mingw/bin/as" \
	--def $(DEF_FILE) --output-lib c_dll_archivos.lib -o $(SHARED_CECIL)

$(SHARED_CECIL): $(SHARED_CECIL_OBJECT)  $(DEF_FILE)
	if [ -f $(SHARED_CECIL) ] ; then $(RM) $(SHARED_CECIL) ; fi
	$(SHAREDLINK) $(SHAREDFLAGS) $(SHARED_CECIL_OBJECT) $(PRECOMP_OBJECTS) $(EXTERNALS) $(EIFLIB) $(SHAREDLIBS) 

#SYSTEM_IN_DYNAMIC_LIB PART

DEF_FILE= archivos.def
dynlib: $(SYSTEM_IN_DYNAMIC_LIB) 
E1/egc_dynlib.o: Makefile E1/Makefile
	$(CP) "$(EIFTEMPLATES)/egc_dynlib.template" E1/egc_dynlib.c
	cd E1 && $(MAKE) egc_dynlib.o && cd ..
E1/edynlib.o: Makefile E1/Makefile E1/edynlib.c 
	cd E1 && $(MAKE) edynlib.o && cd ..

SYSTEM_IN_DYNAMIC_LIB_OBJ = $(OBJECTS) \
		E1/edynlib.o E1/egc_dynlib.o 
DYNLIBSHAREDFLAGS = $(LDSHAREDFLAGS) \
\
	--dlltool-name "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/mingw/bin/dlltool" \
	--as "C:\Program Files\Eiffel Software\EiffelStudio 20.05 Standard/gcc/win64/mingw/bin/as" \
	--def $(DEF_FILE) --output-lib dll_archivos.lib -o $(SYSTEM_IN_DYNAMIC_LIB)

$(SYSTEM_IN_DYNAMIC_LIB): $(SYSTEM_IN_DYNAMIC_LIB_OBJ)  $(DEF_FILE)
	if [ -f $(SYSTEM_IN_DYNAMIC_LIB) ] ; then $(RM) $(SYSTEM_IN_DYNAMIC_LIB) ; fi
	$(SHAREDLINK) $(DYNLIBSHAREDFLAGS) $(SYSTEM_IN_DYNAMIC_LIB_OBJ) $(PRECOMP_OBJECTS) $(EXTERNALS) $(EIFLIB) $(SHAREDLIBS) 



clean: sub_clean local_clean
clobber: sub_clobber local_clobber

local_clean::
	$(RM) core finished *.o *.so *.a

local_clobber:: local_clean
	$(RM) Makefile config.sh finish_freezing

sub_clean::
	for i in $(SUBDIRS); \
	do \
		if [ -r $$i/Makefile ]; then \
			(cd $$i ; $(MAKE) clean); \
		fi; \
	done

sub_clobber::
	for i in $(SUBDIRS); \
	do \
		if [ -r $$i/Makefile ]; then \
			(cd $$i ; $(MAKE) clobber); \
		fi; \
	done

