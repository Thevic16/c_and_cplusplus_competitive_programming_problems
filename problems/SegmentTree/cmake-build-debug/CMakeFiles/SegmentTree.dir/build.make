# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\victo\CLionProjects\SegmentTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\victo\CLionProjects\SegmentTree\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SegmentTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SegmentTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SegmentTree.dir/flags.make

CMakeFiles/SegmentTree.dir/main.cpp.obj: CMakeFiles/SegmentTree.dir/flags.make
CMakeFiles/SegmentTree.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\victo\CLionProjects\SegmentTree\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SegmentTree.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SegmentTree.dir\main.cpp.obj -c C:\Users\victo\CLionProjects\SegmentTree\main.cpp

CMakeFiles/SegmentTree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SegmentTree.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\victo\CLionProjects\SegmentTree\main.cpp > CMakeFiles\SegmentTree.dir\main.cpp.i

CMakeFiles/SegmentTree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SegmentTree.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\victo\CLionProjects\SegmentTree\main.cpp -o CMakeFiles\SegmentTree.dir\main.cpp.s

# Object files for target SegmentTree
SegmentTree_OBJECTS = \
"CMakeFiles/SegmentTree.dir/main.cpp.obj"

# External object files for target SegmentTree
SegmentTree_EXTERNAL_OBJECTS =

SegmentTree.exe: CMakeFiles/SegmentTree.dir/main.cpp.obj
SegmentTree.exe: CMakeFiles/SegmentTree.dir/build.make
SegmentTree.exe: CMakeFiles/SegmentTree.dir/linklibs.rsp
SegmentTree.exe: CMakeFiles/SegmentTree.dir/objects1.rsp
SegmentTree.exe: CMakeFiles/SegmentTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\victo\CLionProjects\SegmentTree\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SegmentTree.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SegmentTree.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SegmentTree.dir/build: SegmentTree.exe

.PHONY : CMakeFiles/SegmentTree.dir/build

CMakeFiles/SegmentTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SegmentTree.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SegmentTree.dir/clean

CMakeFiles/SegmentTree.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\victo\CLionProjects\SegmentTree C:\Users\victo\CLionProjects\SegmentTree C:\Users\victo\CLionProjects\SegmentTree\cmake-build-debug C:\Users\victo\CLionProjects\SegmentTree\cmake-build-debug C:\Users\victo\CLionProjects\SegmentTree\cmake-build-debug\CMakeFiles\SegmentTree.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SegmentTree.dir/depend

