# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /private/var/folders/w0/yrpqk6290831h42hbdj_l6v00000gn/T/AppTranslocation/AE1A8C48-52F2-4269-857D-3ED28C54F308/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/w0/yrpqk6290831h42hbdj_l6v00000gn/T/AppTranslocation/AE1A8C48-52F2-4269-857D-3ED28C54F308/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SentimentAnalyzer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SentimentAnalyzer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SentimentAnalyzer.dir/flags.make

CMakeFiles/SentimentAnalyzer.dir/main.cpp.o: CMakeFiles/SentimentAnalyzer.dir/flags.make
CMakeFiles/SentimentAnalyzer.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SentimentAnalyzer.dir/main.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SentimentAnalyzer.dir/main.cpp.o -c /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/main.cpp

CMakeFiles/SentimentAnalyzer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SentimentAnalyzer.dir/main.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/main.cpp > CMakeFiles/SentimentAnalyzer.dir/main.cpp.i

CMakeFiles/SentimentAnalyzer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SentimentAnalyzer.dir/main.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/main.cpp -o CMakeFiles/SentimentAnalyzer.dir/main.cpp.s

CMakeFiles/SentimentAnalyzer.dir/FileManagement.cpp.o: CMakeFiles/SentimentAnalyzer.dir/flags.make
CMakeFiles/SentimentAnalyzer.dir/FileManagement.cpp.o: ../FileManagement.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SentimentAnalyzer.dir/FileManagement.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SentimentAnalyzer.dir/FileManagement.cpp.o -c /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/FileManagement.cpp

CMakeFiles/SentimentAnalyzer.dir/FileManagement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SentimentAnalyzer.dir/FileManagement.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/FileManagement.cpp > CMakeFiles/SentimentAnalyzer.dir/FileManagement.cpp.i

CMakeFiles/SentimentAnalyzer.dir/FileManagement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SentimentAnalyzer.dir/FileManagement.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/FileManagement.cpp -o CMakeFiles/SentimentAnalyzer.dir/FileManagement.cpp.s

CMakeFiles/SentimentAnalyzer.dir/DSString.cpp.o: CMakeFiles/SentimentAnalyzer.dir/flags.make
CMakeFiles/SentimentAnalyzer.dir/DSString.cpp.o: ../DSString.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SentimentAnalyzer.dir/DSString.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SentimentAnalyzer.dir/DSString.cpp.o -c /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/DSString.cpp

CMakeFiles/SentimentAnalyzer.dir/DSString.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SentimentAnalyzer.dir/DSString.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/DSString.cpp > CMakeFiles/SentimentAnalyzer.dir/DSString.cpp.i

CMakeFiles/SentimentAnalyzer.dir/DSString.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SentimentAnalyzer.dir/DSString.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/DSString.cpp -o CMakeFiles/SentimentAnalyzer.dir/DSString.cpp.s

CMakeFiles/SentimentAnalyzer.dir/test.cpp.o: CMakeFiles/SentimentAnalyzer.dir/flags.make
CMakeFiles/SentimentAnalyzer.dir/test.cpp.o: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SentimentAnalyzer.dir/test.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SentimentAnalyzer.dir/test.cpp.o -c /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/test.cpp

CMakeFiles/SentimentAnalyzer.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SentimentAnalyzer.dir/test.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/test.cpp > CMakeFiles/SentimentAnalyzer.dir/test.cpp.i

CMakeFiles/SentimentAnalyzer.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SentimentAnalyzer.dir/test.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/test.cpp -o CMakeFiles/SentimentAnalyzer.dir/test.cpp.s

# Object files for target SentimentAnalyzer
SentimentAnalyzer_OBJECTS = \
"CMakeFiles/SentimentAnalyzer.dir/main.cpp.o" \
"CMakeFiles/SentimentAnalyzer.dir/FileManagement.cpp.o" \
"CMakeFiles/SentimentAnalyzer.dir/DSString.cpp.o" \
"CMakeFiles/SentimentAnalyzer.dir/test.cpp.o"

# External object files for target SentimentAnalyzer
SentimentAnalyzer_EXTERNAL_OBJECTS =

SentimentAnalyzer: CMakeFiles/SentimentAnalyzer.dir/main.cpp.o
SentimentAnalyzer: CMakeFiles/SentimentAnalyzer.dir/FileManagement.cpp.o
SentimentAnalyzer: CMakeFiles/SentimentAnalyzer.dir/DSString.cpp.o
SentimentAnalyzer: CMakeFiles/SentimentAnalyzer.dir/test.cpp.o
SentimentAnalyzer: CMakeFiles/SentimentAnalyzer.dir/build.make
SentimentAnalyzer: CMakeFiles/SentimentAnalyzer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable SentimentAnalyzer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SentimentAnalyzer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SentimentAnalyzer.dir/build: SentimentAnalyzer

.PHONY : CMakeFiles/SentimentAnalyzer.dir/build

CMakeFiles/SentimentAnalyzer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SentimentAnalyzer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SentimentAnalyzer.dir/clean

CMakeFiles/SentimentAnalyzer.dir/depend:
	cd /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/cmake-build-debug /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/cmake-build-debug /Users/stimmins/Documents/GitHub/20f-sent-an-sltimmins/cmake-build-debug/CMakeFiles/SentimentAnalyzer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SentimentAnalyzer.dir/depend

