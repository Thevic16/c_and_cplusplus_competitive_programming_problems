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
CMAKE_SOURCE_DIR = C:\Users\victo\CLionProjects\problemas

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\victo\CLionProjects\problemas\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/problemas.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/problemas.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/problemas.dir/flags.make

CMakeFiles/problemas.dir/main.cpp.obj: CMakeFiles/problemas.dir/flags.make
CMakeFiles/problemas.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\victo\CLionProjects\problemas\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/problemas.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\problemas.dir\main.cpp.obj -c C:\Users\victo\CLionProjects\problemas\main.cpp

CMakeFiles/problemas.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/problemas.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\victo\CLionProjects\problemas\main.cpp > CMakeFiles\problemas.dir\main.cpp.i

CMakeFiles/problemas.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/problemas.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\victo\CLionProjects\problemas\main.cpp -o CMakeFiles\problemas.dir\main.cpp.s

CMakeFiles/problemas.dir/Colores_I--.cpp.obj: CMakeFiles/problemas.dir/flags.make
CMakeFiles/problemas.dir/Colores_I--.cpp.obj: ../Colores\ I--.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\victo\CLionProjects\problemas\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/problemas.dir/Colores_I--.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\problemas.dir\Colores_I--.cpp.obj -c "C:\Users\victo\CLionProjects\problemas\Colores I--.cpp"

CMakeFiles/problemas.dir/Colores_I--.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/problemas.dir/Colores_I--.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\victo\CLionProjects\problemas\Colores I--.cpp" > CMakeFiles\problemas.dir\Colores_I--.cpp.i

CMakeFiles/problemas.dir/Colores_I--.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/problemas.dir/Colores_I--.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\victo\CLionProjects\problemas\Colores I--.cpp" -o CMakeFiles\problemas.dir\Colores_I--.cpp.s

# Object files for target problemas
problemas_OBJECTS = \
"CMakeFiles/problemas.dir/main.cpp.obj" \
"CMakeFiles/problemas.dir/Colores_I--.cpp.obj"

# External object files for target problemas
problemas_EXTERNAL_OBJECTS =

problemas.exe: CMakeFiles/problemas.dir/main.cpp.obj
problemas.exe: CMakeFiles/problemas.dir/Colores_I--.cpp.obj
problemas.exe: CMakeFiles/problemas.dir/build.make
problemas.exe: CMakeFiles/problemas.dir/linklibs.rsp
problemas.exe: CMakeFiles/problemas.dir/objects1.rsp
problemas.exe: CMakeFiles/problemas.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\victo\CLionProjects\problemas\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable problemas.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\problemas.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/problemas.dir/build: problemas.exe

.PHONY : CMakeFiles/problemas.dir/build

CMakeFiles/problemas.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\problemas.dir\cmake_clean.cmake
.PHONY : CMakeFiles/problemas.dir/clean

CMakeFiles/problemas.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\victo\CLionProjects\problemas C:\Users\victo\CLionProjects\problemas C:\Users\victo\CLionProjects\problemas\cmake-build-debug C:\Users\victo\CLionProjects\problemas\cmake-build-debug C:\Users\victo\CLionProjects\problemas\cmake-build-debug\CMakeFiles\problemas.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/problemas.dir/depend

