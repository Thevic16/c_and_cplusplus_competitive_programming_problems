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
CMAKE_SOURCE_DIR = "C:\Users\victo\CLionProjects\Equivalent Strings"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\victo\CLionProjects\Equivalent Strings\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Equivalent_Strings.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Equivalent_Strings.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Equivalent_Strings.dir/flags.make

CMakeFiles/Equivalent_Strings.dir/main.cpp.obj: CMakeFiles/Equivalent_Strings.dir/flags.make
CMakeFiles/Equivalent_Strings.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\victo\CLionProjects\Equivalent Strings\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Equivalent_Strings.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Equivalent_Strings.dir\main.cpp.obj -c "C:\Users\victo\CLionProjects\Equivalent Strings\main.cpp"

CMakeFiles/Equivalent_Strings.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Equivalent_Strings.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\victo\CLionProjects\Equivalent Strings\main.cpp" > CMakeFiles\Equivalent_Strings.dir\main.cpp.i

CMakeFiles/Equivalent_Strings.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Equivalent_Strings.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\victo\CLionProjects\Equivalent Strings\main.cpp" -o CMakeFiles\Equivalent_Strings.dir\main.cpp.s

# Object files for target Equivalent_Strings
Equivalent_Strings_OBJECTS = \
"CMakeFiles/Equivalent_Strings.dir/main.cpp.obj"

# External object files for target Equivalent_Strings
Equivalent_Strings_EXTERNAL_OBJECTS =

Equivalent_Strings.exe: CMakeFiles/Equivalent_Strings.dir/main.cpp.obj
Equivalent_Strings.exe: CMakeFiles/Equivalent_Strings.dir/build.make
Equivalent_Strings.exe: CMakeFiles/Equivalent_Strings.dir/linklibs.rsp
Equivalent_Strings.exe: CMakeFiles/Equivalent_Strings.dir/objects1.rsp
Equivalent_Strings.exe: CMakeFiles/Equivalent_Strings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\victo\CLionProjects\Equivalent Strings\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Equivalent_Strings.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Equivalent_Strings.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Equivalent_Strings.dir/build: Equivalent_Strings.exe

.PHONY : CMakeFiles/Equivalent_Strings.dir/build

CMakeFiles/Equivalent_Strings.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Equivalent_Strings.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Equivalent_Strings.dir/clean

CMakeFiles/Equivalent_Strings.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\victo\CLionProjects\Equivalent Strings" "C:\Users\victo\CLionProjects\Equivalent Strings" "C:\Users\victo\CLionProjects\Equivalent Strings\cmake-build-debug" "C:\Users\victo\CLionProjects\Equivalent Strings\cmake-build-debug" "C:\Users\victo\CLionProjects\Equivalent Strings\cmake-build-debug\CMakeFiles\Equivalent_Strings.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Equivalent_Strings.dir/depend
