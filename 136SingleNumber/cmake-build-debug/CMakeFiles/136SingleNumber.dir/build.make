# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/white/Documents/Programming/C++/leetcode/136SingleNumber

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/white/Documents/Programming/C++/leetcode/136SingleNumber/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/136SingleNumber.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/136SingleNumber.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/136SingleNumber.dir/flags.make

CMakeFiles/136SingleNumber.dir/main.cpp.o: CMakeFiles/136SingleNumber.dir/flags.make
CMakeFiles/136SingleNumber.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/white/Documents/Programming/C++/leetcode/136SingleNumber/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/136SingleNumber.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/136SingleNumber.dir/main.cpp.o -c /Users/white/Documents/Programming/C++/leetcode/136SingleNumber/main.cpp

CMakeFiles/136SingleNumber.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/136SingleNumber.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/white/Documents/Programming/C++/leetcode/136SingleNumber/main.cpp > CMakeFiles/136SingleNumber.dir/main.cpp.i

CMakeFiles/136SingleNumber.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/136SingleNumber.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/white/Documents/Programming/C++/leetcode/136SingleNumber/main.cpp -o CMakeFiles/136SingleNumber.dir/main.cpp.s

# Object files for target 136SingleNumber
136SingleNumber_OBJECTS = \
"CMakeFiles/136SingleNumber.dir/main.cpp.o"

# External object files for target 136SingleNumber
136SingleNumber_EXTERNAL_OBJECTS =

136SingleNumber: CMakeFiles/136SingleNumber.dir/main.cpp.o
136SingleNumber: CMakeFiles/136SingleNumber.dir/build.make
136SingleNumber: CMakeFiles/136SingleNumber.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/white/Documents/Programming/C++/leetcode/136SingleNumber/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 136SingleNumber"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/136SingleNumber.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/136SingleNumber.dir/build: 136SingleNumber

.PHONY : CMakeFiles/136SingleNumber.dir/build

CMakeFiles/136SingleNumber.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/136SingleNumber.dir/cmake_clean.cmake
.PHONY : CMakeFiles/136SingleNumber.dir/clean

CMakeFiles/136SingleNumber.dir/depend:
	cd /Users/white/Documents/Programming/C++/leetcode/136SingleNumber/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/white/Documents/Programming/C++/leetcode/136SingleNumber /Users/white/Documents/Programming/C++/leetcode/136SingleNumber /Users/white/Documents/Programming/C++/leetcode/136SingleNumber/cmake-build-debug /Users/white/Documents/Programming/C++/leetcode/136SingleNumber/cmake-build-debug /Users/white/Documents/Programming/C++/leetcode/136SingleNumber/cmake-build-debug/CMakeFiles/136SingleNumber.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/136SingleNumber.dir/depend
