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
CMAKE_SOURCE_DIR = C:\Users\victo\CLionProjects\pueba

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\victo\CLionProjects\pueba\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pueba.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pueba.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pueba.dir/flags.make

CMakeFiles/pueba.dir/main.cpp.obj: CMakeFiles/pueba.dir/flags.make
CMakeFiles/pueba.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\victo\CLionProjects\pueba\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pueba.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pueba.dir\main.cpp.obj -c C:\Users\victo\CLionProjects\pueba\main.cpp

CMakeFiles/pueba.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pueba.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\victo\CLionProjects\pueba\main.cpp > CMakeFiles\pueba.dir\main.cpp.i

CMakeFiles/pueba.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pueba.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\victo\CLionProjects\pueba\main.cpp -o CMakeFiles\pueba.dir\main.cpp.s

# Object files for target pueba
pueba_OBJECTS = \
"CMakeFiles/pueba.dir/main.cpp.obj"

# External object files for target pueba
pueba_EXTERNAL_OBJECTS =

pueba.exe: CMakeFiles/pueba.dir/main.cpp.obj
pueba.exe: CMakeFiles/pueba.dir/build.make
pueba.exe: CMakeFiles/pueba.dir/linklibs.rsp
pueba.exe: CMakeFiles/pueba.dir/objects1.rsp
pueba.exe: CMakeFiles/pueba.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\victo\CLionProjects\pueba\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pueba.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pueba.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pueba.dir/build: pueba.exe

.PHONY : CMakeFiles/pueba.dir/build

CMakeFiles/pueba.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pueba.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pueba.dir/clean

CMakeFiles/pueba.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\victo\CLionProjects\pueba C:\Users\victo\CLionProjects\pueba C:\Users\victo\CLionProjects\pueba\cmake-build-debug C:\Users\victo\CLionProjects\pueba\cmake-build-debug C:\Users\victo\CLionProjects\pueba\cmake-build-debug\CMakeFiles\pueba.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pueba.dir/depend

