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
CMAKE_SOURCE_DIR = C:\Users\victo\CLionProjects\HISTOGRA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\victo\CLionProjects\HISTOGRA\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HISTOGRA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HISTOGRA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HISTOGRA.dir/flags.make

CMakeFiles/HISTOGRA.dir/main.cpp.obj: CMakeFiles/HISTOGRA.dir/flags.make
CMakeFiles/HISTOGRA.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\victo\CLionProjects\HISTOGRA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HISTOGRA.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HISTOGRA.dir\main.cpp.obj -c C:\Users\victo\CLionProjects\HISTOGRA\main.cpp

CMakeFiles/HISTOGRA.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HISTOGRA.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\victo\CLionProjects\HISTOGRA\main.cpp > CMakeFiles\HISTOGRA.dir\main.cpp.i

CMakeFiles/HISTOGRA.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HISTOGRA.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\victo\CLionProjects\HISTOGRA\main.cpp -o CMakeFiles\HISTOGRA.dir\main.cpp.s

# Object files for target HISTOGRA
HISTOGRA_OBJECTS = \
"CMakeFiles/HISTOGRA.dir/main.cpp.obj"

# External object files for target HISTOGRA
HISTOGRA_EXTERNAL_OBJECTS =

HISTOGRA.exe: CMakeFiles/HISTOGRA.dir/main.cpp.obj
HISTOGRA.exe: CMakeFiles/HISTOGRA.dir/build.make
HISTOGRA.exe: CMakeFiles/HISTOGRA.dir/linklibs.rsp
HISTOGRA.exe: CMakeFiles/HISTOGRA.dir/objects1.rsp
HISTOGRA.exe: CMakeFiles/HISTOGRA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\victo\CLionProjects\HISTOGRA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HISTOGRA.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HISTOGRA.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HISTOGRA.dir/build: HISTOGRA.exe

.PHONY : CMakeFiles/HISTOGRA.dir/build

CMakeFiles/HISTOGRA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HISTOGRA.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HISTOGRA.dir/clean

CMakeFiles/HISTOGRA.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\victo\CLionProjects\HISTOGRA C:\Users\victo\CLionProjects\HISTOGRA C:\Users\victo\CLionProjects\HISTOGRA\cmake-build-debug C:\Users\victo\CLionProjects\HISTOGRA\cmake-build-debug C:\Users\victo\CLionProjects\HISTOGRA\cmake-build-debug\CMakeFiles\HISTOGRA.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HISTOGRA.dir/depend

