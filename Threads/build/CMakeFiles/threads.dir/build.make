# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Cmake\Threads

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Cmake\Threads\build

# Include any dependencies generated for this target.
include CMakeFiles/threads.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/threads.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/threads.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/threads.dir/flags.make

CMakeFiles/threads.dir/main.cpp.obj: CMakeFiles/threads.dir/flags.make
CMakeFiles/threads.dir/main.cpp.obj: D:/Cmake/Threads/main.cpp
CMakeFiles/threads.dir/main.cpp.obj: CMakeFiles/threads.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Cmake\Threads\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/threads.dir/main.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/threads.dir/main.cpp.obj -MF CMakeFiles\threads.dir\main.cpp.obj.d -o CMakeFiles\threads.dir\main.cpp.obj -c D:\Cmake\Threads\main.cpp

CMakeFiles/threads.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/threads.dir/main.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Cmake\Threads\main.cpp > CMakeFiles\threads.dir\main.cpp.i

CMakeFiles/threads.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/threads.dir/main.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Cmake\Threads\main.cpp -o CMakeFiles\threads.dir\main.cpp.s

# Object files for target threads
threads_OBJECTS = \
"CMakeFiles/threads.dir/main.cpp.obj"

# External object files for target threads
threads_EXTERNAL_OBJECTS =

threads.exe: CMakeFiles/threads.dir/main.cpp.obj
threads.exe: CMakeFiles/threads.dir/build.make
threads.exe: CMakeFiles/threads.dir/linkLibs.rsp
threads.exe: CMakeFiles/threads.dir/objects1.rsp
threads.exe: CMakeFiles/threads.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\Cmake\Threads\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable threads.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\threads.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/threads.dir/build: threads.exe
.PHONY : CMakeFiles/threads.dir/build

CMakeFiles/threads.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\threads.dir\cmake_clean.cmake
.PHONY : CMakeFiles/threads.dir/clean

CMakeFiles/threads.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Cmake\Threads D:\Cmake\Threads D:\Cmake\Threads\build D:\Cmake\Threads\build D:\Cmake\Threads\build\CMakeFiles\threads.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/threads.dir/depend

