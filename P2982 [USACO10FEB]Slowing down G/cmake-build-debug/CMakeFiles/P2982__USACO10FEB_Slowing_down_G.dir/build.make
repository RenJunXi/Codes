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
CMAKE_SOURCE_DIR = "/Users/alan/Documents/Code/P2982 [USACO10FEB]Slowing down G"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/alan/Documents/Code/P2982 [USACO10FEB]Slowing down G/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/flags.make

CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/main.cpp.o: CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/flags.make
CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/alan/Documents/Code/P2982 [USACO10FEB]Slowing down G/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/main.cpp.o -c "/Users/alan/Documents/Code/P2982 [USACO10FEB]Slowing down G/main.cpp"

CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/alan/Documents/Code/P2982 [USACO10FEB]Slowing down G/main.cpp" > CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/main.cpp.i

CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/alan/Documents/Code/P2982 [USACO10FEB]Slowing down G/main.cpp" -o CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/main.cpp.s

# Object files for target P2982__USACO10FEB_Slowing_down_G
P2982__USACO10FEB_Slowing_down_G_OBJECTS = \
"CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/main.cpp.o"

# External object files for target P2982__USACO10FEB_Slowing_down_G
P2982__USACO10FEB_Slowing_down_G_EXTERNAL_OBJECTS =

P2982__USACO10FEB_Slowing_down_G: CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/main.cpp.o
P2982__USACO10FEB_Slowing_down_G: CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/build.make
P2982__USACO10FEB_Slowing_down_G: CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/alan/Documents/Code/P2982 [USACO10FEB]Slowing down G/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P2982__USACO10FEB_Slowing_down_G"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/build: P2982__USACO10FEB_Slowing_down_G

.PHONY : CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/build

CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/cmake_clean.cmake
.PHONY : CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/clean

CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/depend:
	cd "/Users/alan/Documents/Code/P2982 [USACO10FEB]Slowing down G/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/alan/Documents/Code/P2982 [USACO10FEB]Slowing down G" "/Users/alan/Documents/Code/P2982 [USACO10FEB]Slowing down G" "/Users/alan/Documents/Code/P2982 [USACO10FEB]Slowing down G/cmake-build-debug" "/Users/alan/Documents/Code/P2982 [USACO10FEB]Slowing down G/cmake-build-debug" "/Users/alan/Documents/Code/P2982 [USACO10FEB]Slowing down G/cmake-build-debug/CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/P2982__USACO10FEB_Slowing_down_G.dir/depend

