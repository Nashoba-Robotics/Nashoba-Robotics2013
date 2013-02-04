# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))
WRVX_COMPBASE := $(subst \,/,$(WRVX_COMPBASE))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC32diab
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/CommandBasedRobotTemplate2013



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
DEBUGFLAGS_Linker = -XO -Xsize-opt
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif


#Project Targets
PROJECT_TARGETS = CommandBasedRobotTemplate2013/$(MODE_DIR)/CommandBasedRobotTemplate2013.out \
	 CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate2013_partialImage.o


#Rules

# CommandBasedRobotTemplate2013
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -XO -Xsize-opt
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : IDE_LIBRARIES = 
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : CPU = PPC32
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : TOOL_FAMILY = diab
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : TOOL = diab
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate2013/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate2013/$(MODE_DIR)

OBJECTS_CommandBasedRobotTemplate2013 = CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate2013_partialImage.o

CommandBasedRobotTemplate2013/$(MODE_DIR)/CommandBasedRobotTemplate2013.out : $(OBJECTS_CommandBasedRobotTemplate2013)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";ddump -Ng $(OBJECTS_CommandBasedRobotTemplate2013) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)dcc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -Xdollar-in-ident -Xforce-declarations $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)dld -tPPCFH:vxworks63 -X -r5 -r4 -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CommandBasedRobotTemplate2013) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate2013/$(MODE_DIR)/CommandBasedRobotTemplate2013_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate2013/$(MODE_DIR)/CommandBasedRobotTemplate2013_clean

CommandBasedRobotTemplate2013/$(MODE_DIR)/CommandBasedRobotTemplate2013_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate2013" ]; then cd "CommandBasedRobotTemplate2013"; rm -rf $(MODE_DIR); fi


# CommandBasedRobotTemplate2013_partialImage
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -XO -Xsize-opt
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = 
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : CPU = PPC32
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = diab
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : TOOL = diab
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)

CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/CommandBase.o : $(PRJ_ROOT_DIR)/CommandBase.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/CommandBasedRobot.o : $(PRJ_ROOT_DIR)/CommandBasedRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Commands/AutonomousCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Commands/CancelAllCommand.o : $(PRJ_ROOT_DIR)/Commands/CancelAllCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Commands/ExampleCommand.o : $(PRJ_ROOT_DIR)/Commands/ExampleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Commands/JoyStickDriveCommand.o : $(PRJ_ROOT_DIR)/Commands/JoyStickDriveCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/OperatorInput.o : $(PRJ_ROOT_DIR)/OperatorInput.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Subsystems/DriveSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/DriveSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Subsystems/ExampleSubsystem.o : $(PRJ_ROOT_DIR)/Subsystems/ExampleSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBasedRobotTemplate2013_partialImage = CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/CommandBase.o \
	 CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/CommandBasedRobot.o \
	 CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Commands/AutonomousCommand.o \
	 CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Commands/CancelAllCommand.o \
	 CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Commands/ExampleCommand.o \
	 CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Commands/JoyStickDriveCommand.o \
	 CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/OperatorInput.o \
	 CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Subsystems/DriveSubsystem.o \
	 CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Subsystems/ExampleSubsystem.o

CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate2013_partialImage.o : $(OBJECTS_CommandBasedRobotTemplate2013_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dld -tPPCFH:vxworks63 -X -r5  -o "$@" $(OBJECTS_CommandBasedRobotTemplate2013_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate2013_partialImage_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate2013_partialImage_clean

CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate2013_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate2013_partialImage" ]; then cd "CommandBasedRobotTemplate2013_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/CommandBase.d CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/CommandBasedRobot.d CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Commands/AutonomousCommand.d \
	 CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Commands/CancelAllCommand.d CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Commands/ExampleCommand.d CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Commands/JoyStickDriveCommand.d \
	 CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/OperatorInput.d CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Subsystems/DriveSubsystem.d CommandBasedRobotTemplate2013_partialImage/$(MODE_DIR)/Objects/CommandBasedRobotTemplate2013/Subsystems/ExampleSubsystem.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

JOBS?=1
ifeq ($(JOBS),1)
main_all : external_build  $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"
else
main_all : external_build 
	@$(MAKE) -f $(MAKEFILE) --jobs $(JOBS) $(MFLAGS) $(PROJECT_TARGETS);\
	echo "make: built targets of `pwd`"
endif 

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
