# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/git/testing/json2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/git/testing/json2/build

# Include any dependencies generated for this target.
include test/CMakeFiles/test-element_access1.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test-element_access1.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test-element_access1.dir/flags.make

test/CMakeFiles/test-element_access1.dir/src/unit-element_access1.cpp.o: test/CMakeFiles/test-element_access1.dir/flags.make
test/CMakeFiles/test-element_access1.dir/src/unit-element_access1.cpp.o: ../test/src/unit-element_access1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/git/testing/json2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/test-element_access1.dir/src/unit-element_access1.cpp.o"
	cd /root/git/testing/json2/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test-element_access1.dir/src/unit-element_access1.cpp.o -c /root/git/testing/json2/test/src/unit-element_access1.cpp

test/CMakeFiles/test-element_access1.dir/src/unit-element_access1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-element_access1.dir/src/unit-element_access1.cpp.i"
	cd /root/git/testing/json2/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/git/testing/json2/test/src/unit-element_access1.cpp > CMakeFiles/test-element_access1.dir/src/unit-element_access1.cpp.i

test/CMakeFiles/test-element_access1.dir/src/unit-element_access1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-element_access1.dir/src/unit-element_access1.cpp.s"
	cd /root/git/testing/json2/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/git/testing/json2/test/src/unit-element_access1.cpp -o CMakeFiles/test-element_access1.dir/src/unit-element_access1.cpp.s

# Object files for target test-element_access1
test__element_access1_OBJECTS = \
"CMakeFiles/test-element_access1.dir/src/unit-element_access1.cpp.o"

# External object files for target test-element_access1
test__element_access1_EXTERNAL_OBJECTS = \
"/root/git/testing/json2/build/test/CMakeFiles/doctest_main.dir/src/unit.cpp.o"

test/test-element_access1: test/CMakeFiles/test-element_access1.dir/src/unit-element_access1.cpp.o
test/test-element_access1: test/CMakeFiles/doctest_main.dir/src/unit.cpp.o
test/test-element_access1: test/CMakeFiles/test-element_access1.dir/build.make
test/test-element_access1: test/CMakeFiles/test-element_access1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/git/testing/json2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test-element_access1"
	cd /root/git/testing/json2/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-element_access1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/test-element_access1.dir/build: test/test-element_access1

.PHONY : test/CMakeFiles/test-element_access1.dir/build

test/CMakeFiles/test-element_access1.dir/clean:
	cd /root/git/testing/json2/build/test && $(CMAKE_COMMAND) -P CMakeFiles/test-element_access1.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/test-element_access1.dir/clean

test/CMakeFiles/test-element_access1.dir/depend:
	cd /root/git/testing/json2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/git/testing/json2 /root/git/testing/json2/test /root/git/testing/json2/build /root/git/testing/json2/build/test /root/git/testing/json2/build/test/CMakeFiles/test-element_access1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/test-element_access1.dir/depend
