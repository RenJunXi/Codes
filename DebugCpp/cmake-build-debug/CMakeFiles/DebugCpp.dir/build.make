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
CMAKE_SOURCE_DIR = /Users/alan/Documents/Code/DebugCpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alan/Documents/Code/DebugCpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DebugCpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DebugCpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DebugCpp.dir/flags.make

CMakeFiles/DebugCpp.dir/main.cpp.o: CMakeFiles/DebugCpp.dir/flags.make
CMakeFiles/DebugCpp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alan/Documents/Code/DebugCpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DebugCpp.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DebugCpp.dir/main.cpp.o -c /Users/alan/Documents/Code/DebugCpp/main.cpp

CMakeFiles/DebugCpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DebugCpp.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alan/Documents/Code/DebugCpp/main.cpp > CMakeFiles/DebugCpp.dir/main.cpp.i

CMakeFiles/DebugCpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DebugCpp.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alan/Documents/Code/DebugCpp/main.cpp -o CMakeFiles/DebugCpp.dir/main.cpp.s

# Object files for target DebugCpp
DebugCpp_OBJECTS = \
"CMakeFiles/DebugCpp.dir/main.cpp.o"

# External object files for target DebugCpp
DebugCpp_EXTERNAL_OBJECTS =

DebugCpp: CMakeFiles/DebugCpp.dir/main.cpp.o
DebugCpp: CMakeFiles/DebugCpp.dir/build.make
DebugCpp: CMakeFiles/DebugCpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alan/Documents/Code/DebugCpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DebugCpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DebugCpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DebugCpp.dir/build: DebugCpp

.PHONY : CMakeFiles/DebugCpp.dir/build

CMakeFiles/DebugCpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DebugCpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DebugCpp.dir/clean

CMakeFiles/DebugCpp.dir/depend:
	cd /Users/alan/Documents/Code/DebugCpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alan/Documents/Code/DebugCpp /Users/alan/Documents/Code/DebugCpp /Users/alan/Documents/Code/DebugCpp/cmake-build-debug /Users/alan/Documents/Code/DebugCpp/cmake-build-debug /Users/alan/Documents/Code/DebugCpp/cmake-build-debug/CMakeFiles/DebugCpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DebugCpp.dir/depend
