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
include test/CMakeFiles/runEntityTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/runEntityTests.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/runEntityTests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/runEntityTests.dir/flags.make

test/CMakeFiles/runEntityTests.dir/TestEntity.cpp.o: test/CMakeFiles/runEntityTests.dir/flags.make
test/CMakeFiles/runEntityTests.dir/TestEntity.cpp.o: test/TestEntity.cpp
test/CMakeFiles/runEntityTests.dir/TestEntity.cpp.o: test/CMakeFiles/runEntityTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mickaelosegueda/Desktop/Project-Cerberus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/runEntityTests.dir/TestEntity.cpp.o"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/runEntityTests.dir/TestEntity.cpp.o -MF CMakeFiles/runEntityTests.dir/TestEntity.cpp.o.d -o CMakeFiles/runEntityTests.dir/TestEntity.cpp.o -c /Users/mickaelosegueda/Desktop/Project-Cerberus/test/TestEntity.cpp

test/CMakeFiles/runEntityTests.dir/TestEntity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runEntityTests.dir/TestEntity.cpp.i"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mickaelosegueda/Desktop/Project-Cerberus/test/TestEntity.cpp > CMakeFiles/runEntityTests.dir/TestEntity.cpp.i

test/CMakeFiles/runEntityTests.dir/TestEntity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runEntityTests.dir/TestEntity.cpp.s"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mickaelosegueda/Desktop/Project-Cerberus/test/TestEntity.cpp -o CMakeFiles/runEntityTests.dir/TestEntity.cpp.s

# Object files for target runEntityTests
runEntityTests_OBJECTS = \
"CMakeFiles/runEntityTests.dir/TestEntity.cpp.o"

# External object files for target runEntityTests
runEntityTests_EXTERNAL_OBJECTS =

bin/runEntityTests: test/CMakeFiles/runEntityTests.dir/TestEntity.cpp.o
bin/runEntityTests: test/CMakeFiles/runEntityTests.dir/build.make
bin/runEntityTests: lib/libgmock.a
bin/runEntityTests: lib/libgtest.a
bin/runEntityTests: lib/libgtest_main.a
bin/runEntityTests: src/liblibrary.a
bin/runEntityTests: lib/libgtest.a
bin/runEntityTests: /Library/Developer/CommandLineTools/SDKs/MacOSX13.1.sdk/usr/lib/libm.tbd
bin/runEntityTests: test/CMakeFiles/runEntityTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mickaelosegueda/Desktop/Project-Cerberus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/runEntityTests"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runEntityTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/runEntityTests.dir/build: bin/runEntityTests
.PHONY : test/CMakeFiles/runEntityTests.dir/build

test/CMakeFiles/runEntityTests.dir/clean:
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && $(CMAKE_COMMAND) -P CMakeFiles/runEntityTests.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/runEntityTests.dir/clean

test/CMakeFiles/runEntityTests.dir/depend:
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mickaelosegueda/Desktop/Project-Cerberus /Users/mickaelosegueda/Desktop/Project-Cerberus/test /Users/mickaelosegueda/Desktop/Project-Cerberus /Users/mickaelosegueda/Desktop/Project-Cerberus/test /Users/mickaelosegueda/Desktop/Project-Cerberus/test/CMakeFiles/runEntityTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/runEntityTests.dir/depend

