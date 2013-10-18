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

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/NashobaRobotics2013



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

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
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o


#Rules

# CommandBasedRobotTemplate
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate/$(MODE_DIR)

OBJECTS_CommandBasedRobotTemplate = CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out : $(OBJECTS_CommandBasedRobotTemplate)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate" ]; then cd "CommandBasedRobotTemplate"; rm -rf $(MODE_DIR); fi


# CommandBasedRobotTemplate_partialImage
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate_partialImage/$(MODE_DIR)

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatinStopCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatinStopCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingDeployCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatingDeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingExtendCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatingExtendCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatingIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingUndeployCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatingUndeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingunextendCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatingunextendCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/AutonomousCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CameraRotateToPoleCommand.o : $(PRJ_ROOT_DIR)/Commands/CameraRotateToPoleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CameraRotateToTargetCommand.o : $(PRJ_ROOT_DIR)/Commands/CameraRotateToTargetCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CancelAllCommand.o : $(PRJ_ROOT_DIR)/Commands/CancelAllCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CheckAllSensorsCommand.o : $(PRJ_ROOT_DIR)/Commands/CheckAllSensorsCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CompressorAutomaticToggleCommand.o : $(PRJ_ROOT_DIR)/Commands/CompressorAutomaticToggleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CompressorIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/CompressorIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CompressorStartCommand.o : $(PRJ_ROOT_DIR)/Commands/CompressorStartCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CompressorStopCommand.o : $(PRJ_ROOT_DIR)/Commands/CompressorStopCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/DriveBrakeCommand.o : $(PRJ_ROOT_DIR)/Commands/DriveBrakeCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/DriveDirectionCommand.o : $(PRJ_ROOT_DIR)/Commands/DriveDirectionCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/DriveDriveCommand.o : $(PRJ_ROOT_DIR)/Commands/DriveDriveCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/DriveRotateCommand.o : $(PRJ_ROOT_DIR)/Commands/DriveRotateCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/FixedDeployCommand.o : $(PRJ_ROOT_DIR)/Commands/FixedDeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/FixedIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/FixedIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/FixedundeployCommand.o : $(PRJ_ROOT_DIR)/Commands/FixedundeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShootFourTimesCommand.o : $(PRJ_ROOT_DIR)/Commands/ShootFourTimesCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShootOneTimeCommand.o : $(PRJ_ROOT_DIR)/Commands/ShootOneTimeCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterDecrementSpeed.o : $(PRJ_ROOT_DIR)/Commands/ShooterDecrementSpeed.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterIncrementSpeed.o : $(PRJ_ROOT_DIR)/Commands/ShooterIncrementSpeed.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterLoadCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterLoadCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterRunCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterRunCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterStopCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterStopCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TippingDeployCommand.o : $(PRJ_ROOT_DIR)/Commands/TippingDeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TippingIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/TippingIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TippingUndeployCommand.o : $(PRJ_ROOT_DIR)/Commands/TippingUndeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackDeployBrakeCommand.o : $(PRJ_ROOT_DIR)/Commands/TrackDeployBrakeCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackDriveDownUntilForceCommand.o : $(PRJ_ROOT_DIR)/Commands/TrackDriveDownUntilForceCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackDriveSpeedCommand.o : $(PRJ_ROOT_DIR)/Commands/TrackDriveSpeedCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/TrackIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackUndeployBrakeCommand.o : $(PRJ_ROOT_DIR)/Commands/TrackUndeployBrakeCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/CoprocessorVision.o : $(PRJ_ROOT_DIR)/CoprocessorVision.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Robot.o : $(PRJ_ROOT_DIR)/Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/RobotMap.o : $(PRJ_ROOT_DIR)/RobotMap.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/ArticulatingArm.o : $(PRJ_ROOT_DIR)/Subsystems/ArticulatingArm.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/Drive.o : $(PRJ_ROOT_DIR)/Subsystems/Drive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/FixedArm.o : $(PRJ_ROOT_DIR)/Subsystems/FixedArm.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/PneumaticsCompressor.o : $(PRJ_ROOT_DIR)/Subsystems/PneumaticsCompressor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/Shooter.o : $(PRJ_ROOT_DIR)/Subsystems/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/Tipping.o : $(PRJ_ROOT_DIR)/Subsystems/Tipping.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/Track.o : $(PRJ_ROOT_DIR)/Subsystems/Track.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall -Werror $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<" -fno-permissive


OBJECTS_CommandBasedRobotTemplate_partialImage = CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatinStopCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingDeployCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingExtendCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingIdleCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingUndeployCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingunextendCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/AutonomousCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CameraRotateToPoleCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CameraRotateToTargetCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CancelAllCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CheckAllSensorsCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CompressorAutomaticToggleCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CompressorIdleCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CompressorStartCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CompressorStopCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/DriveBrakeCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/DriveDirectionCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/DriveDriveCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/DriveRotateCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/FixedDeployCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/FixedIdleCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/FixedundeployCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShootFourTimesCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShootOneTimeCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterDecrementSpeed.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterIdleCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterIncrementSpeed.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterLoadCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterRunCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterStopCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TippingDeployCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TippingIdleCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TippingUndeployCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackDeployBrakeCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackDriveDownUntilForceCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackDriveSpeedCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackIdleCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackUndeployBrakeCommand.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/CoprocessorVision.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/OI.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Robot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/RobotMap.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/ArticulatingArm.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/Drive.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/FixedArm.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/PneumaticsCompressor.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/Shooter.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/Tipping.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/Track.o

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o : $(OBJECTS_CommandBasedRobotTemplate_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_CommandBasedRobotTemplate_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_clean

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate_partialImage" ]; then cd "CommandBasedRobotTemplate_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatinStopCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingDeployCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingExtendCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingIdleCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingUndeployCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ArticulatingunextendCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/AutonomousCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CameraRotateToPoleCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CameraRotateToTargetCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CancelAllCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CheckAllSensorsCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CompressorAutomaticToggleCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CompressorIdleCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CompressorStartCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/CompressorStopCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/DriveBrakeCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/DriveDirectionCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/DriveDriveCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/DriveRotateCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/FixedDeployCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/FixedIdleCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/FixedundeployCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShootFourTimesCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShootOneTimeCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterDecrementSpeed.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterIdleCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterIncrementSpeed.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterLoadCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterRunCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/ShooterStopCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TippingDeployCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TippingIdleCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TippingUndeployCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackDeployBrakeCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackDriveDownUntilForceCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackDriveSpeedCommand.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackIdleCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Commands/TrackUndeployBrakeCommand.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/CoprocessorVision.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/OI.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Robot.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/RobotMap.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/ArticulatingArm.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/Drive.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/FixedArm.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/PneumaticsCompressor.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/Shooter.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/Tipping.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/NashobaRobotics2013/Subsystems/Track.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

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
