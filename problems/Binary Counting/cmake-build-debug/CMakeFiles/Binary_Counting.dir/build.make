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
CMAKE_SOURCE_DIR = "C:\Users\victo\CLionProjects\Binary Counting"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\victo\CLionProjects\Binary Counting\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Binary_Counting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Binary_Counting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Binary_Counting.dir/flags.make

CMakeFiles/Binary_Counting.dir/main.cpp.obj: CMakeFiles/Binary_Counting.dir/flags.make
CMakeFiles/Binary_Counting.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\victo\CLionProjects\Binary Counting\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Binary_Counting.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Binary_Counting.dir\main.cpp.obj -c "C:\Users\victo\CLionProjects\Binary Counting\main.cpp"

CMakeFiles/Binary_Counting.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Binary_Counting.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\victo\CLionProjects\Binary Counting\main.cpp" > CMakeFiles\Binary_Counting.dir\main.cpp.i

CMakeFiles/Binary_Counting.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Binary_Counting.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\victo\CLionProjects\Binary Counting\main.cpp" -o CMakeFiles\Binary_Counting.dir\main.cpp.s

# Object files for target Binary_Counting
Binary_Counting_OBJECTS = \
"CMakeFiles/Binary_Counting.dir/main.cpp.obj"

# External object files for target Binary_Counting
Binary_Counting_EXTERNAL_OBJECTS =

Binary_Counting.exe: CMakeFiles/Binary_Counting.dir/main.cpp.obj
Binary_Counting.exe: CMakeFiles/Binary_Counting.dir/build.make
Binary_Counting.exe: CMakeFiles/Binary_Counting.dir/linklibs.rsp
Binary_Counting.exe: CMakeFiles/Binary_Counting.dir/objects1.rsp
Binary_Counting.exe: CMakeFiles/Binary_Counting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\victo\CLionProjects\Binary Counting\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Binary_Counting.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Binary_Counting.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Binary_Counting.dir/build: Binary_Counting.exe

.PHONY : CMakeFiles/Binary_Counting.dir/build

CMakeFiles/Binary_Counting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Binary_Counting.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Binary_Counting.dir/clean

CMakeFiles/Binary_Counting.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\victo\CLionProjects\Binary Counting" "C:\Users\victo\CLionProjects\Binary Counting" "C:\Users\victo\CLionProjects\Binary Counting\cmake-build-debug" "C:\Users\victo\CLionProjects\Binary Counting\cmake-build-debug" "C:\Users\victo\CLionProjects\Binary Counting\cmake-build-debug\CMakeFiles\Binary_Counting.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Binary_Counting.dir/depend

