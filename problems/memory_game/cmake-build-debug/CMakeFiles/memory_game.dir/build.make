# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\victo\CLionProjects\memory_game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\victo\CLionProjects\memory_game\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/memory_game.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/memory_game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/memory_game.dir/flags.make

CMakeFiles/memory_game.dir/main.cpp.obj: CMakeFiles/memory_game.dir/flags.make
CMakeFiles/memory_game.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\victo\CLionProjects\memory_game\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/memory_game.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\memory_game.dir\main.cpp.obj -c C:\Users\victo\CLionProjects\memory_game\main.cpp

CMakeFiles/memory_game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/memory_game.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\victo\CLionProjects\memory_game\main.cpp > CMakeFiles\memory_game.dir\main.cpp.i

CMakeFiles/memory_game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/memory_game.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\victo\CLionProjects\memory_game\main.cpp -o CMakeFiles\memory_game.dir\main.cpp.s

# Object files for target memory_game
memory_game_OBJECTS = \
"CMakeFiles/memory_game.dir/main.cpp.obj"

# External object files for target memory_game
memory_game_EXTERNAL_OBJECTS =

memory_game.exe: CMakeFiles/memory_game.dir/main.cpp.obj
memory_game.exe: CMakeFiles/memory_game.dir/build.make
memory_game.exe: CMakeFiles/memory_game.dir/linklibs.rsp
memory_game.exe: CMakeFiles/memory_game.dir/objects1.rsp
memory_game.exe: CMakeFiles/memory_game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\victo\CLionProjects\memory_game\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable memory_game.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\memory_game.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/memory_game.dir/build: memory_game.exe
.PHONY : CMakeFiles/memory_game.dir/build

CMakeFiles/memory_game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\memory_game.dir\cmake_clean.cmake
.PHONY : CMakeFiles/memory_game.dir/clean

CMakeFiles/memory_game.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\victo\CLionProjects\memory_game C:\Users\victo\CLionProjects\memory_game C:\Users\victo\CLionProjects\memory_game\cmake-build-debug C:\Users\victo\CLionProjects\memory_game\cmake-build-debug C:\Users\victo\CLionProjects\memory_game\cmake-build-debug\CMakeFiles\memory_game.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/memory_game.dir/depend

