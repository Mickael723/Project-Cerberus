# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.26.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.26.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mickaelosegueda/Desktop/Project-Cerberus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mickaelosegueda/Desktop/Project-Cerberus

# Include any dependencies generated for this target.
include src/CMakeFiles/library.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/library.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/library.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/library.dir/flags.make

src/CMakeFiles/library.dir/ActionTimer.cpp.o: src/CMakeFiles/library.dir/flags.make
src/CMakeFiles/library.dir/ActionTimer.cpp.o: src/ActionTimer.cpp
src/CMakeFiles/library.dir/ActionTimer.cpp.o: src/CMakeFiles/library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mickaelosegueda/Desktop/Project-Cerberus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/library.dir/ActionTimer.cpp.o"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/library.dir/ActionTimer.cpp.o -MF CMakeFiles/library.dir/ActionTimer.cpp.o.d -o CMakeFiles/library.dir/ActionTimer.cpp.o -c /Users/mickaelosegueda/Desktop/Project-Cerberus/src/ActionTimer.cpp

src/CMakeFiles/library.dir/ActionTimer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/library.dir/ActionTimer.cpp.i"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mickaelosegueda/Desktop/Project-Cerberus/src/ActionTimer.cpp > CMakeFiles/library.dir/ActionTimer.cpp.i

src/CMakeFiles/library.dir/ActionTimer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/library.dir/ActionTimer.cpp.s"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mickaelosegueda/Desktop/Project-Cerberus/src/ActionTimer.cpp -o CMakeFiles/library.dir/ActionTimer.cpp.s

# Object files for target library
library_OBJECTS = \
"CMakeFiles/library.dir/ActionTimer.cpp.o"

# External object files for target library
library_EXTERNAL_OBJECTS =

src/liblibrary.a: src/CMakeFiles/library.dir/ActionTimer.cpp.o
src/liblibrary.a: src/CMakeFiles/library.dir/build.make
src/liblibrary.a: src/CMakeFiles/library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mickaelosegueda/Desktop/Project-Cerberus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblibrary.a"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/src && $(CMAKE_COMMAND) -P CMakeFiles/library.dir/cmake_clean_target.cmake
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/library.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/library.dir/build: src/liblibrary.a
.PHONY : src/CMakeFiles/library.dir/build

src/CMakeFiles/library.dir/clean:
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/src && $(CMAKE_COMMAND) -P CMakeFiles/library.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/library.dir/clean

src/CMakeFiles/library.dir/depend:
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mickaelosegueda/Desktop/Project-Cerberus /Users/mickaelosegueda/Desktop/Project-Cerberus/src /Users/mickaelosegueda/Desktop/Project-Cerberus /Users/mickaelosegueda/Desktop/Project-Cerberus/src /Users/mickaelosegueda/Desktop/Project-Cerberus/src/CMakeFiles/library.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/library.dir/depend

