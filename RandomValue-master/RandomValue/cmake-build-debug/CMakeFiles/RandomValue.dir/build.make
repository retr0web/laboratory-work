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
CMAKE_COMMAND = "D:\Prog\Tools\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Prog\Tools\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\oleg\CLionProjects\RandomValue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\oleg\CLionProjects\RandomValue\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RandomValue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RandomValue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RandomValue.dir/flags.make

CMakeFiles/RandomValue.dir/main.cpp.obj: CMakeFiles/RandomValue.dir/flags.make
CMakeFiles/RandomValue.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\oleg\CLionProjects\RandomValue\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RandomValue.dir/main.cpp.obj"
	D:\Prog\Tools\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\RandomValue.dir\main.cpp.obj -c C:\Users\oleg\CLionProjects\RandomValue\main.cpp

CMakeFiles/RandomValue.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RandomValue.dir/main.cpp.i"
	D:\Prog\Tools\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\oleg\CLionProjects\RandomValue\main.cpp > CMakeFiles\RandomValue.dir\main.cpp.i

CMakeFiles/RandomValue.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RandomValue.dir/main.cpp.s"
	D:\Prog\Tools\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\oleg\CLionProjects\RandomValue\main.cpp -o CMakeFiles\RandomValue.dir\main.cpp.s

# Object files for target RandomValue
RandomValue_OBJECTS = \
"CMakeFiles/RandomValue.dir/main.cpp.obj"

# External object files for target RandomValue
RandomValue_EXTERNAL_OBJECTS =

RandomValue.exe: CMakeFiles/RandomValue.dir/main.cpp.obj
RandomValue.exe: CMakeFiles/RandomValue.dir/build.make
RandomValue.exe: CMakeFiles/RandomValue.dir/linklibs.rsp
RandomValue.exe: CMakeFiles/RandomValue.dir/objects1.rsp
RandomValue.exe: CMakeFiles/RandomValue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\oleg\CLionProjects\RandomValue\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable RandomValue.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\RandomValue.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RandomValue.dir/build: RandomValue.exe

.PHONY : CMakeFiles/RandomValue.dir/build

CMakeFiles/RandomValue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\RandomValue.dir\cmake_clean.cmake
.PHONY : CMakeFiles/RandomValue.dir/clean

CMakeFiles/RandomValue.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\oleg\CLionProjects\RandomValue C:\Users\oleg\CLionProjects\RandomValue C:\Users\oleg\CLionProjects\RandomValue\cmake-build-debug C:\Users\oleg\CLionProjects\RandomValue\cmake-build-debug C:\Users\oleg\CLionProjects\RandomValue\cmake-build-debug\CMakeFiles\RandomValue.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RandomValue.dir/depend

