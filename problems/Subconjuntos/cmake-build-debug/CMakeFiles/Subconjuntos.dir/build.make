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
CMAKE_SOURCE_DIR = C:\Users\victo\CLionProjects\Subconjuntos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\victo\CLionProjects\Subconjuntos\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Subconjuntos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Subconjuntos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Subconjuntos.dir/flags.make

CMakeFiles/Subconjuntos.dir/main.cpp.obj: CMakeFiles/Subconjuntos.dir/flags.make
CMakeFiles/Subconjuntos.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\victo\CLionProjects\Subconjuntos\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Subconjuntos.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Subconjuntos.dir\main.cpp.obj -c C:\Users\victo\CLionProjects\Subconjuntos\main.cpp

CMakeFiles/Subconjuntos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Subconjuntos.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\victo\CLionProjects\Subconjuntos\main.cpp > CMakeFiles\Subconjuntos.dir\main.cpp.i

CMakeFiles/Subconjuntos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Subconjuntos.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\victo\CLionProjects\Subconjuntos\main.cpp -o CMakeFiles\Subconjuntos.dir\main.cpp.s

# Object files for target Subconjuntos
Subconjuntos_OBJECTS = \
"CMakeFiles/Subconjuntos.dir/main.cpp.obj"

# External object files for target Subconjuntos
Subconjuntos_EXTERNAL_OBJECTS =

Subconjuntos.exe: CMakeFiles/Subconjuntos.dir/main.cpp.obj
Subconjuntos.exe: CMakeFiles/Subconjuntos.dir/build.make
Subconjuntos.exe: CMakeFiles/Subconjuntos.dir/linklibs.rsp
Subconjuntos.exe: CMakeFiles/Subconjuntos.dir/objects1.rsp
Subconjuntos.exe: CMakeFiles/Subconjuntos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\victo\CLionProjects\Subconjuntos\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Subconjuntos.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Subconjuntos.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Subconjuntos.dir/build: Subconjuntos.exe

.PHONY : CMakeFiles/Subconjuntos.dir/build

CMakeFiles/Subconjuntos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Subconjuntos.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Subconjuntos.dir/clean

CMakeFiles/Subconjuntos.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\victo\CLionProjects\Subconjuntos C:\Users\victo\CLionProjects\Subconjuntos C:\Users\victo\CLionProjects\Subconjuntos\cmake-build-debug C:\Users\victo\CLionProjects\Subconjuntos\cmake-build-debug C:\Users\victo\CLionProjects\Subconjuntos\cmake-build-debug\CMakeFiles\Subconjuntos.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Subconjuntos.dir/depend

