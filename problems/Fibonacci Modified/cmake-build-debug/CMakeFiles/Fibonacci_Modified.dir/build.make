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
CMAKE_SOURCE_DIR = "C:\Users\victo\CLionProjects\Fibonacci Modified"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\victo\CLionProjects\Fibonacci Modified\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Fibonacci_Modified.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Fibonacci_Modified.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Fibonacci_Modified.dir/flags.make

CMakeFiles/Fibonacci_Modified.dir/main.cpp.obj: CMakeFiles/Fibonacci_Modified.dir/flags.make
CMakeFiles/Fibonacci_Modified.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\victo\CLionProjects\Fibonacci Modified\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Fibonacci_Modified.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Fibonacci_Modified.dir\main.cpp.obj -c "C:\Users\victo\CLionProjects\Fibonacci Modified\main.cpp"

CMakeFiles/Fibonacci_Modified.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Fibonacci_Modified.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\victo\CLionProjects\Fibonacci Modified\main.cpp" > CMakeFiles\Fibonacci_Modified.dir\main.cpp.i

CMakeFiles/Fibonacci_Modified.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Fibonacci_Modified.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\victo\CLionProjects\Fibonacci Modified\main.cpp" -o CMakeFiles\Fibonacci_Modified.dir\main.cpp.s

# Object files for target Fibonacci_Modified
Fibonacci_Modified_OBJECTS = \
"CMakeFiles/Fibonacci_Modified.dir/main.cpp.obj"

# External object files for target Fibonacci_Modified
Fibonacci_Modified_EXTERNAL_OBJECTS =

Fibonacci_Modified.exe: CMakeFiles/Fibonacci_Modified.dir/main.cpp.obj
Fibonacci_Modified.exe: CMakeFiles/Fibonacci_Modified.dir/build.make
Fibonacci_Modified.exe: CMakeFiles/Fibonacci_Modified.dir/linklibs.rsp
Fibonacci_Modified.exe: CMakeFiles/Fibonacci_Modified.dir/objects1.rsp
Fibonacci_Modified.exe: CMakeFiles/Fibonacci_Modified.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\victo\CLionProjects\Fibonacci Modified\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Fibonacci_Modified.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Fibonacci_Modified.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Fibonacci_Modified.dir/build: Fibonacci_Modified.exe

.PHONY : CMakeFiles/Fibonacci_Modified.dir/build

CMakeFiles/Fibonacci_Modified.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Fibonacci_Modified.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Fibonacci_Modified.dir/clean

CMakeFiles/Fibonacci_Modified.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\victo\CLionProjects\Fibonacci Modified" "C:\Users\victo\CLionProjects\Fibonacci Modified" "C:\Users\victo\CLionProjects\Fibonacci Modified\cmake-build-debug" "C:\Users\victo\CLionProjects\Fibonacci Modified\cmake-build-debug" "C:\Users\victo\CLionProjects\Fibonacci Modified\cmake-build-debug\CMakeFiles\Fibonacci_Modified.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Fibonacci_Modified.dir/depend

