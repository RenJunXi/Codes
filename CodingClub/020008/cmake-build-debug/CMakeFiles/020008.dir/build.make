# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "/Users/alan/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7628.27/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/alan/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.7628.27/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/alan/Documents/Code/CodingClub/020008

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alan/Documents/Code/CodingClub/020008/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/020008.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/020008.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/020008.dir/flags.make

CMakeFiles/020008.dir/main.cpp.o: CMakeFiles/020008.dir/flags.make
CMakeFiles/020008.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alan/Documents/Code/CodingClub/020008/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/020008.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/020008.dir/main.cpp.o -c /Users/alan/Documents/Code/CodingClub/020008/main.cpp

CMakeFiles/020008.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/020008.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alan/Documents/Code/CodingClub/020008/main.cpp > CMakeFiles/020008.dir/main.cpp.i

CMakeFiles/020008.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/020008.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alan/Documents/Code/CodingClub/020008/main.cpp -o CMakeFiles/020008.dir/main.cpp.s

# Object files for target 020008
020008_OBJECTS = \
"CMakeFiles/020008.dir/main.cpp.o"

# External object files for target 020008
020008_EXTERNAL_OBJECTS =

020008: CMakeFiles/020008.dir/main.cpp.o
020008: CMakeFiles/020008.dir/build.make
020008: CMakeFiles/020008.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alan/Documents/Code/CodingClub/020008/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 020008"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/020008.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/020008.dir/build: 020008

.PHONY : CMakeFiles/020008.dir/build

CMakeFiles/020008.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/020008.dir/cmake_clean.cmake
.PHONY : CMakeFiles/020008.dir/clean

CMakeFiles/020008.dir/depend:
	cd /Users/alan/Documents/Code/CodingClub/020008/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alan/Documents/Code/CodingClub/020008 /Users/alan/Documents/Code/CodingClub/020008 /Users/alan/Documents/Code/CodingClub/020008/cmake-build-debug /Users/alan/Documents/Code/CodingClub/020008/cmake-build-debug /Users/alan/Documents/Code/CodingClub/020008/cmake-build-debug/CMakeFiles/020008.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/020008.dir/depend
