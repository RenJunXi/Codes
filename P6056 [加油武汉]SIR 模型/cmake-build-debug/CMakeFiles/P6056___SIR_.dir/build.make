# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "/Users/alan/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-1/212.5457.51/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/alan/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-1/212.5457.51/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/alan/Documents/P6056 [加油武汉]SIR 模型"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/alan/Documents/P6056 [加油武汉]SIR 模型/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/P6056___SIR_.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/P6056___SIR_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P6056___SIR_.dir/flags.make

CMakeFiles/P6056___SIR_.dir/main.cpp.o: CMakeFiles/P6056___SIR_.dir/flags.make
CMakeFiles/P6056___SIR_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/alan/Documents/P6056 [加油武汉]SIR 模型/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P6056___SIR_.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/P6056___SIR_.dir/main.cpp.o -c "/Users/alan/Documents/P6056 [加油武汉]SIR 模型/main.cpp"

CMakeFiles/P6056___SIR_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P6056___SIR_.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/alan/Documents/P6056 [加油武汉]SIR 模型/main.cpp" > CMakeFiles/P6056___SIR_.dir/main.cpp.i

CMakeFiles/P6056___SIR_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P6056___SIR_.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/alan/Documents/P6056 [加油武汉]SIR 模型/main.cpp" -o CMakeFiles/P6056___SIR_.dir/main.cpp.s

# Object files for target P6056___SIR_
P6056___SIR__OBJECTS = \
"CMakeFiles/P6056___SIR_.dir/main.cpp.o"

# External object files for target P6056___SIR_
P6056___SIR__EXTERNAL_OBJECTS =

P6056___SIR_: CMakeFiles/P6056___SIR_.dir/main.cpp.o
P6056___SIR_: CMakeFiles/P6056___SIR_.dir/build.make
P6056___SIR_: CMakeFiles/P6056___SIR_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/alan/Documents/P6056 [加油武汉]SIR 模型/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P6056___SIR_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/P6056___SIR_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P6056___SIR_.dir/build: P6056___SIR_
.PHONY : CMakeFiles/P6056___SIR_.dir/build

CMakeFiles/P6056___SIR_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/P6056___SIR_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/P6056___SIR_.dir/clean

CMakeFiles/P6056___SIR_.dir/depend:
	cd "/Users/alan/Documents/P6056 [加油武汉]SIR 模型/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/alan/Documents/P6056 [加油武汉]SIR 模型" "/Users/alan/Documents/P6056 [加油武汉]SIR 模型" "/Users/alan/Documents/P6056 [加油武汉]SIR 模型/cmake-build-debug" "/Users/alan/Documents/P6056 [加油武汉]SIR 模型/cmake-build-debug" "/Users/alan/Documents/P6056 [加油武汉]SIR 模型/cmake-build-debug/CMakeFiles/P6056___SIR_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/P6056___SIR_.dir/depend

