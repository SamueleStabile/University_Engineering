# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\Code\University_Engineering\CLion Debugger Samu"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Code\University_Engineering\CLion Debugger Samu\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CLion_Debugger_Samu.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CLion_Debugger_Samu.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CLion_Debugger_Samu.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CLion_Debugger_Samu.dir/flags.make

CMakeFiles/CLion_Debugger_Samu.dir/main.c.obj: CMakeFiles/CLion_Debugger_Samu.dir/flags.make
CMakeFiles/CLion_Debugger_Samu.dir/main.c.obj: ../main.c
CMakeFiles/CLion_Debugger_Samu.dir/main.c.obj: CMakeFiles/CLion_Debugger_Samu.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Code\University_Engineering\CLion Debugger Samu\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CLion_Debugger_Samu.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/CLion_Debugger_Samu.dir/main.c.obj -MF CMakeFiles\CLion_Debugger_Samu.dir\main.c.obj.d -o CMakeFiles\CLion_Debugger_Samu.dir\main.c.obj -c "E:\Code\University_Engineering\CLion Debugger Samu\main.c"

CMakeFiles/CLion_Debugger_Samu.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CLion_Debugger_Samu.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\Code\University_Engineering\CLion Debugger Samu\main.c" > CMakeFiles\CLion_Debugger_Samu.dir\main.c.i

CMakeFiles/CLion_Debugger_Samu.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CLion_Debugger_Samu.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\Code\University_Engineering\CLion Debugger Samu\main.c" -o CMakeFiles\CLion_Debugger_Samu.dir\main.c.s

# Object files for target CLion_Debugger_Samu
CLion_Debugger_Samu_OBJECTS = \
"CMakeFiles/CLion_Debugger_Samu.dir/main.c.obj"

# External object files for target CLion_Debugger_Samu
CLion_Debugger_Samu_EXTERNAL_OBJECTS =

CLion_Debugger_Samu.exe: CMakeFiles/CLion_Debugger_Samu.dir/main.c.obj
CLion_Debugger_Samu.exe: CMakeFiles/CLion_Debugger_Samu.dir/build.make
CLion_Debugger_Samu.exe: CMakeFiles/CLion_Debugger_Samu.dir/linklibs.rsp
CLion_Debugger_Samu.exe: CMakeFiles/CLion_Debugger_Samu.dir/objects1.rsp
CLion_Debugger_Samu.exe: CMakeFiles/CLion_Debugger_Samu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Code\University_Engineering\CLion Debugger Samu\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable CLion_Debugger_Samu.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CLion_Debugger_Samu.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CLion_Debugger_Samu.dir/build: CLion_Debugger_Samu.exe
.PHONY : CMakeFiles/CLion_Debugger_Samu.dir/build

CMakeFiles/CLion_Debugger_Samu.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CLion_Debugger_Samu.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CLion_Debugger_Samu.dir/clean

CMakeFiles/CLion_Debugger_Samu.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Code\University_Engineering\CLion Debugger Samu" "E:\Code\University_Engineering\CLion Debugger Samu" "E:\Code\University_Engineering\CLion Debugger Samu\cmake-build-debug" "E:\Code\University_Engineering\CLion Debugger Samu\cmake-build-debug" "E:\Code\University_Engineering\CLion Debugger Samu\cmake-build-debug\CMakeFiles\CLion_Debugger_Samu.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CLion_Debugger_Samu.dir/depend
