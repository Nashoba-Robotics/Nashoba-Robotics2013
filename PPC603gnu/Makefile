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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/Nashoba\ Robotics\ 2013\ V1



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
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage.o


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
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
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

CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Arduino.o : $(PRJ_ROOT_DIR)/Arduino.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelDeployCommand.o : $(PRJ_ROOT_DIR)/Commands/AngelDeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/AngelIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelUndeployCommand.o : $(PRJ_ROOT_DIR)/Commands/AngelUndeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedActivateCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedActivateCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedDeployCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedDeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedExtendCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedExtendCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedInactivateCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedInactivateCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedUndeployCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedUndeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedUnextendCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedUnextendCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AutonomousCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CancelAllCommand.o : $(PRJ_ROOT_DIR)/Commands/CancelAllCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelOneCommand.o : $(PRJ_ROOT_DIR)/Commands/ClimbToLevelOneCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelThreeCommand.o : $(PRJ_ROOT_DIR)/Commands/ClimbToLevelThreeCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelTwoCommand.o : $(PRJ_ROOT_DIR)/Commands/ClimbToLevelTwoCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/CompressorIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorStartCommand.o : $(PRJ_ROOT_DIR)/Commands/CompressorStartCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorStopCommand.o : $(PRJ_ROOT_DIR)/Commands/CompressorStopCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/DriveBrakeCommand.o : $(PRJ_ROOT_DIR)/Commands/DriveBrakeCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/DriveDriveCommand.o : $(PRJ_ROOT_DIR)/Commands/DriveDriveCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetDeployCommand.o : $(PRJ_ROOT_DIR)/Commands/FeetDeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/FeetIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetUndeployCommand.o : $(PRJ_ROOT_DIR)/Commands/FeetUndeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedDeployCommand.o : $(PRJ_ROOT_DIR)/Commands/FixedDeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/FixedIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedUndeployCommand.o : $(PRJ_ROOT_DIR)/Commands/FixedUndeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/PneumaticsOff.o : $(PRJ_ROOT_DIR)/Commands/PneumaticsOff.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterLoadCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterLoadCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterShootCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterShootCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterStopCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterStopCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/StopAllCommand.o : $(PRJ_ROOT_DIR)/Commands/StopAllCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingDeployCommand.o : $(PRJ_ROOT_DIR)/Commands/TippingDeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/TippingIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingUndeployCommand.o : $(PRJ_ROOT_DIR)/Commands/TippingUndeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackDriveDownCommand.o : $(PRJ_ROOT_DIR)/Commands/TrackDriveDownCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackDriveUpCommand.o : $(PRJ_ROOT_DIR)/Commands/TrackDriveUpCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/TrackIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Robot.o : $(PRJ_ROOT_DIR)/Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/RobotMap.o : $(PRJ_ROOT_DIR)/RobotMap.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/AngelWings.o : $(PRJ_ROOT_DIR)/Subsystems/AngelWings.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/ArticulatingArm.o : $(PRJ_ROOT_DIR)/Subsystems/ArticulatingArm.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Drive.o : $(PRJ_ROOT_DIR)/Subsystems/Drive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Feet.o : $(PRJ_ROOT_DIR)/Subsystems/Feet.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/FixedArm.o : $(PRJ_ROOT_DIR)/Subsystems/FixedArm.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/PneumaticsCompressor.o : $(PRJ_ROOT_DIR)/Subsystems/PneumaticsCompressor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Shooter.o : $(PRJ_ROOT_DIR)/Subsystems/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Tipping.o : $(PRJ_ROOT_DIR)/Subsystems/Tipping.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Track.o : $(PRJ_ROOT_DIR)/Subsystems/Track.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBasedRobotTemplate = CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Arduino.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelDeployCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelIdleCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelUndeployCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedActivateCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedDeployCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedExtendCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedIdleCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedInactivateCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedUndeployCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedUnextendCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AutonomousCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CancelAllCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelOneCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelThreeCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelTwoCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorIdleCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorStartCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorStopCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/DriveBrakeCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/DriveDriveCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetDeployCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetIdleCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetUndeployCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedDeployCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedIdleCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedUndeployCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/PneumaticsOff.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterIdleCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterLoadCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterShootCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterStopCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/StopAllCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingDeployCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingIdleCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingUndeployCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackDriveDownCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackDriveUpCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackIdleCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/OI.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Robot.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/RobotMap.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/AngelWings.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/ArticulatingArm.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Drive.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Feet.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/FixedArm.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/PneumaticsCompressor.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Shooter.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Tipping.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Track.o

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out : $(OBJECTS_CommandBasedRobotTemplate)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate" ]; then cd "CommandBasedRobotTemplate"; rm -rf $(MODE_DIR); fi


# CommandBassedRobotTemplate_partialImage
ifeq ($(DEBUG_MODE),1)
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEFINES = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : CPU = PPC603
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL = gnu
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBPATH = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBS = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : OBJ_DIR := CommandBassedRobotTemplate_partialImage/$(MODE_DIR)

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Arduino.o : $(PRJ_ROOT_DIR)/Arduino.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelDeployCommand.o : $(PRJ_ROOT_DIR)/Commands/AngelDeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/AngelIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelUndeployCommand.o : $(PRJ_ROOT_DIR)/Commands/AngelUndeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedActivateCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedActivateCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedDeployCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedDeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedExtendCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedExtendCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedInactivateCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedInactivateCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedUndeployCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedUndeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedUnextendCommand.o : $(PRJ_ROOT_DIR)/Commands/ArticulatedUnextendCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AutonomousCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CancelAllCommand.o : $(PRJ_ROOT_DIR)/Commands/CancelAllCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelOneCommand.o : $(PRJ_ROOT_DIR)/Commands/ClimbToLevelOneCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelThreeCommand.o : $(PRJ_ROOT_DIR)/Commands/ClimbToLevelThreeCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelTwoCommand.o : $(PRJ_ROOT_DIR)/Commands/ClimbToLevelTwoCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/CompressorIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorStartCommand.o : $(PRJ_ROOT_DIR)/Commands/CompressorStartCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorStopCommand.o : $(PRJ_ROOT_DIR)/Commands/CompressorStopCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/DriveBrakeCommand.o : $(PRJ_ROOT_DIR)/Commands/DriveBrakeCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/DriveDriveCommand.o : $(PRJ_ROOT_DIR)/Commands/DriveDriveCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetDeployCommand.o : $(PRJ_ROOT_DIR)/Commands/FeetDeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/FeetIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetUndeployCommand.o : $(PRJ_ROOT_DIR)/Commands/FeetUndeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedDeployCommand.o : $(PRJ_ROOT_DIR)/Commands/FixedDeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/FixedIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedUndeployCommand.o : $(PRJ_ROOT_DIR)/Commands/FixedUndeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/PneumaticsOff.o : $(PRJ_ROOT_DIR)/Commands/PneumaticsOff.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterLoadCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterLoadCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterShootCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterShootCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterStopCommand.o : $(PRJ_ROOT_DIR)/Commands/ShooterStopCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/StopAllCommand.o : $(PRJ_ROOT_DIR)/Commands/StopAllCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingDeployCommand.o : $(PRJ_ROOT_DIR)/Commands/TippingDeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/TippingIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingUndeployCommand.o : $(PRJ_ROOT_DIR)/Commands/TippingUndeployCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackDriveDownCommand.o : $(PRJ_ROOT_DIR)/Commands/TrackDriveDownCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackDriveUpCommand.o : $(PRJ_ROOT_DIR)/Commands/TrackDriveUpCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackIdleCommand.o : $(PRJ_ROOT_DIR)/Commands/TrackIdleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Robot.o : $(PRJ_ROOT_DIR)/Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/RobotMap.o : $(PRJ_ROOT_DIR)/RobotMap.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/AngelWings.o : $(PRJ_ROOT_DIR)/Subsystems/AngelWings.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/ArticulatingArm.o : $(PRJ_ROOT_DIR)/Subsystems/ArticulatingArm.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Drive.o : $(PRJ_ROOT_DIR)/Subsystems/Drive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Feet.o : $(PRJ_ROOT_DIR)/Subsystems/Feet.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/FixedArm.o : $(PRJ_ROOT_DIR)/Subsystems/FixedArm.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/PneumaticsCompressor.o : $(PRJ_ROOT_DIR)/Subsystems/PneumaticsCompressor.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Shooter.o : $(PRJ_ROOT_DIR)/Subsystems/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Tipping.o : $(PRJ_ROOT_DIR)/Subsystems/Tipping.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Track.o : $(PRJ_ROOT_DIR)/Subsystems/Track.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBassedRobotTemplate_partialImage = CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Arduino.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelDeployCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelIdleCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelUndeployCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedActivateCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedDeployCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedExtendCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedIdleCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedInactivateCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedUndeployCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedUnextendCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AutonomousCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CancelAllCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelOneCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelThreeCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelTwoCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorIdleCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorStartCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorStopCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/DriveBrakeCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/DriveDriveCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetDeployCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetIdleCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetUndeployCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedDeployCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedIdleCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedUndeployCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/PneumaticsOff.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterIdleCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterLoadCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterShootCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterStopCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/StopAllCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingDeployCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingIdleCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingUndeployCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackDriveDownCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackDriveUpCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackIdleCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/OI.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Robot.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/RobotMap.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/AngelWings.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/ArticulatingArm.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Drive.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Feet.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/FixedArm.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/PneumaticsCompressor.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Shooter.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Tipping.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Track.o

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage.o : $(OBJECTS_CommandBassedRobotTemplate_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_CommandBassedRobotTemplate_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_compile_file : $(FILE) ;

_clean :: CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_clean

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CommandBassedRobotTemplate_partialImage" ]; then cd "CommandBassedRobotTemplate_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Arduino.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelDeployCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelIdleCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelUndeployCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedActivateCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedDeployCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedExtendCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedIdleCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedInactivateCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedUndeployCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedUnextendCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AutonomousCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CancelAllCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelOneCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelThreeCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelTwoCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorIdleCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorStartCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorStopCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/DriveBrakeCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/DriveDriveCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetDeployCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetIdleCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetUndeployCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedDeployCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedIdleCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedUndeployCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/PneumaticsOff.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterIdleCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterLoadCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterShootCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterStopCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/StopAllCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingDeployCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingIdleCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingUndeployCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackDriveDownCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackDriveUpCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackIdleCommand.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/OI.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Robot.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/RobotMap.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/AngelWings.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/ArticulatingArm.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Drive.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Feet.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/FixedArm.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/PneumaticsCompressor.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Shooter.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Tipping.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Track.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Arduino.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelDeployCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelIdleCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AngelUndeployCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedActivateCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedDeployCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedExtendCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedIdleCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedInactivateCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedUndeployCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ArticulatedUnextendCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/AutonomousCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CancelAllCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelOneCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelThreeCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ClimbToLevelTwoCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorIdleCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorStartCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/CompressorStopCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/DriveBrakeCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/DriveDriveCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetDeployCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetIdleCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FeetUndeployCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedDeployCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedIdleCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/FixedUndeployCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/PneumaticsOff.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterIdleCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterLoadCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterShootCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/ShooterStopCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/StopAllCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingDeployCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingIdleCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TippingUndeployCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackDriveDownCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackDriveUpCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Commands/TrackIdleCommand.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/OI.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Robot.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/RobotMap.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/AngelWings.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/ArticulatingArm.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Drive.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Feet.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/FixedArm.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/PneumaticsCompressor.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Shooter.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Tipping.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Nashoba\ Robotics\ 2013\ V1/Subsystems/Track.d
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
