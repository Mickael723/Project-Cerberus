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
include test/CMakeFiles/runAllTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/runAllTests.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/runAllTests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/runAllTests.dir/flags.make

test/CMakeFiles/runAllTests.dir/TestActionTimer.cpp.o: test/CMakeFiles/runAllTests.dir/flags.make
test/CMakeFiles/runAllTests.dir/TestActionTimer.cpp.o: test/TestActionTimer.cpp
test/CMakeFiles/runAllTests.dir/TestActionTimer.cpp.o: test/CMakeFiles/runAllTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mickaelosegueda/Desktop/Project-Cerberus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/runAllTests.dir/TestActionTimer.cpp.o"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/runAllTests.dir/TestActionTimer.cpp.o -MF CMakeFiles/runAllTests.dir/TestActionTimer.cpp.o.d -o CMakeFiles/runAllTests.dir/TestActionTimer.cpp.o -c /Users/mickaelosegueda/Desktop/Project-Cerberus/test/TestActionTimer.cpp

test/CMakeFiles/runAllTests.dir/TestActionTimer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runAllTests.dir/TestActionTimer.cpp.i"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mickaelosegueda/Desktop/Project-Cerberus/test/TestActionTimer.cpp > CMakeFiles/runAllTests.dir/TestActionTimer.cpp.i

test/CMakeFiles/runAllTests.dir/TestActionTimer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runAllTests.dir/TestActionTimer.cpp.s"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mickaelosegueda/Desktop/Project-Cerberus/test/TestActionTimer.cpp -o CMakeFiles/runAllTests.dir/TestActionTimer.cpp.s

test/CMakeFiles/runAllTests.dir/TestEntity.cpp.o: test/CMakeFiles/runAllTests.dir/flags.make
test/CMakeFiles/runAllTests.dir/TestEntity.cpp.o: test/TestEntity.cpp
test/CMakeFiles/runAllTests.dir/TestEntity.cpp.o: test/CMakeFiles/runAllTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mickaelosegueda/Desktop/Project-Cerberus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/runAllTests.dir/TestEntity.cpp.o"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/runAllTests.dir/TestEntity.cpp.o -MF CMakeFiles/runAllTests.dir/TestEntity.cpp.o.d -o CMakeFiles/runAllTests.dir/TestEntity.cpp.o -c /Users/mickaelosegueda/Desktop/Project-Cerberus/test/TestEntity.cpp

test/CMakeFiles/runAllTests.dir/TestEntity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runAllTests.dir/TestEntity.cpp.i"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mickaelosegueda/Desktop/Project-Cerberus/test/TestEntity.cpp > CMakeFiles/runAllTests.dir/TestEntity.cpp.i

test/CMakeFiles/runAllTests.dir/TestEntity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runAllTests.dir/TestEntity.cpp.s"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mickaelosegueda/Desktop/Project-Cerberus/test/TestEntity.cpp -o CMakeFiles/runAllTests.dir/TestEntity.cpp.s

test/CMakeFiles/runAllTests.dir/TestHumanoid.cpp.o: test/CMakeFiles/runAllTests.dir/flags.make
test/CMakeFiles/runAllTests.dir/TestHumanoid.cpp.o: test/TestHumanoid.cpp
test/CMakeFiles/runAllTests.dir/TestHumanoid.cpp.o: test/CMakeFiles/runAllTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mickaelosegueda/Desktop/Project-Cerberus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object test/CMakeFiles/runAllTests.dir/TestHumanoid.cpp.o"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/runAllTests.dir/TestHumanoid.cpp.o -MF CMakeFiles/runAllTests.dir/TestHumanoid.cpp.o.d -o CMakeFiles/runAllTests.dir/TestHumanoid.cpp.o -c /Users/mickaelosegueda/Desktop/Project-Cerberus/test/TestHumanoid.cpp

test/CMakeFiles/runAllTests.dir/TestHumanoid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runAllTests.dir/TestHumanoid.cpp.i"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mickaelosegueda/Desktop/Project-Cerberus/test/TestHumanoid.cpp > CMakeFiles/runAllTests.dir/TestHumanoid.cpp.i

test/CMakeFiles/runAllTests.dir/TestHumanoid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runAllTests.dir/TestHumanoid.cpp.s"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mickaelosegueda/Desktop/Project-Cerberus/test/TestHumanoid.cpp -o CMakeFiles/runAllTests.dir/TestHumanoid.cpp.s

# Object files for target runAllTests
runAllTests_OBJECTS = \
"CMakeFiles/runAllTests.dir/TestActionTimer.cpp.o" \
"CMakeFiles/runAllTests.dir/TestEntity.cpp.o" \
"CMakeFiles/runAllTests.dir/TestHumanoid.cpp.o"

# External object files for target runAllTests
runAllTests_EXTERNAL_OBJECTS =

bin/runAllTests: test/CMakeFiles/runAllTests.dir/TestActionTimer.cpp.o
bin/runAllTests: test/CMakeFiles/runAllTests.dir/TestEntity.cpp.o
bin/runAllTests: test/CMakeFiles/runAllTests.dir/TestHumanoid.cpp.o
bin/runAllTests: test/CMakeFiles/runAllTests.dir/build.make
bin/runAllTests: lib/libgmock.a
bin/runAllTests: lib/libgtest.a
bin/runAllTests: lib/libgtest_main.a
bin/runAllTests: src/liblibrary.a
bin/runAllTests: lib/libgtest.a
bin/runAllTests: /Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/lib/libm.tbd
bin/runAllTests: test/CMakeFiles/runAllTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mickaelosegueda/Desktop/Project-Cerberus/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../bin/runAllTests"
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runAllTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/runAllTests.dir/build: bin/runAllTests
.PHONY : test/CMakeFiles/runAllTests.dir/build

test/CMakeFiles/runAllTests.dir/clean:
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus/test && $(CMAKE_COMMAND) -P CMakeFiles/runAllTests.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/runAllTests.dir/clean

test/CMakeFiles/runAllTests.dir/depend:
	cd /Users/mickaelosegueda/Desktop/Project-Cerberus && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mickaelosegueda/Desktop/Project-Cerberus /Users/mickaelosegueda/Desktop/Project-Cerberus/test /Users/mickaelosegueda/Desktop/Project-Cerberus /Users/mickaelosegueda/Desktop/Project-Cerberus/test /Users/mickaelosegueda/Desktop/Project-Cerberus/test/CMakeFiles/runAllTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/runAllTests.dir/depend

