# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/cmake-3.29.2/bin/cmake

# The command to remove a file.
RM = /opt/cmake-3.29.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/admxf/Projects/cppdemo/practice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/admxf/Projects/cppdemo/practice/build

# Include any dependencies generated for this target.
include src/Shape/CMakeFiles/shape_make.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/Shape/CMakeFiles/shape_make.dir/compiler_depend.make

# Include the progress variables for this target.
include src/Shape/CMakeFiles/shape_make.dir/progress.make

# Include the compile flags for this target's objects.
include src/Shape/CMakeFiles/shape_make.dir/flags.make

src/Shape/CMakeFiles/shape_make.dir/Shape.cpp.o: src/Shape/CMakeFiles/shape_make.dir/flags.make
src/Shape/CMakeFiles/shape_make.dir/Shape.cpp.o: /home/admxf/Projects/cppdemo/practice/src/Shape/Shape.cpp
src/Shape/CMakeFiles/shape_make.dir/Shape.cpp.o: src/Shape/CMakeFiles/shape_make.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/admxf/Projects/cppdemo/practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/Shape/CMakeFiles/shape_make.dir/Shape.cpp.o"
	cd /home/admxf/Projects/cppdemo/practice/build/src/Shape && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/Shape/CMakeFiles/shape_make.dir/Shape.cpp.o -MF CMakeFiles/shape_make.dir/Shape.cpp.o.d -o CMakeFiles/shape_make.dir/Shape.cpp.o -c /home/admxf/Projects/cppdemo/practice/src/Shape/Shape.cpp

src/Shape/CMakeFiles/shape_make.dir/Shape.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/shape_make.dir/Shape.cpp.i"
	cd /home/admxf/Projects/cppdemo/practice/build/src/Shape && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/admxf/Projects/cppdemo/practice/src/Shape/Shape.cpp > CMakeFiles/shape_make.dir/Shape.cpp.i

src/Shape/CMakeFiles/shape_make.dir/Shape.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/shape_make.dir/Shape.cpp.s"
	cd /home/admxf/Projects/cppdemo/practice/build/src/Shape && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/admxf/Projects/cppdemo/practice/src/Shape/Shape.cpp -o CMakeFiles/shape_make.dir/Shape.cpp.s

# Object files for target shape_make
shape_make_OBJECTS = \
"CMakeFiles/shape_make.dir/Shape.cpp.o"

# External object files for target shape_make
shape_make_EXTERNAL_OBJECTS =

/home/admxf/Projects/cppdemo/practice/bin/shape_make: src/Shape/CMakeFiles/shape_make.dir/Shape.cpp.o
/home/admxf/Projects/cppdemo/practice/bin/shape_make: src/Shape/CMakeFiles/shape_make.dir/build.make
/home/admxf/Projects/cppdemo/practice/bin/shape_make: src/Shape/CMakeFiles/shape_make.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/admxf/Projects/cppdemo/practice/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/admxf/Projects/cppdemo/practice/bin/shape_make"
	cd /home/admxf/Projects/cppdemo/practice/build/src/Shape && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shape_make.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Shape/CMakeFiles/shape_make.dir/build: /home/admxf/Projects/cppdemo/practice/bin/shape_make
.PHONY : src/Shape/CMakeFiles/shape_make.dir/build

src/Shape/CMakeFiles/shape_make.dir/clean:
	cd /home/admxf/Projects/cppdemo/practice/build/src/Shape && $(CMAKE_COMMAND) -P CMakeFiles/shape_make.dir/cmake_clean.cmake
.PHONY : src/Shape/CMakeFiles/shape_make.dir/clean

src/Shape/CMakeFiles/shape_make.dir/depend:
	cd /home/admxf/Projects/cppdemo/practice/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/admxf/Projects/cppdemo/practice /home/admxf/Projects/cppdemo/practice/src/Shape /home/admxf/Projects/cppdemo/practice/build /home/admxf/Projects/cppdemo/practice/build/src/Shape /home/admxf/Projects/cppdemo/practice/build/src/Shape/CMakeFiles/shape_make.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/Shape/CMakeFiles/shape_make.dir/depend

