# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /Users/yanghai/CLionProjects/structcpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yanghai/CLionProjects/structcpp/cmake-build-debug

# Include any dependencies generated for this target.
include sort/CMakeFiles/sort.dir/depend.make

# Include the progress variables for this target.
include sort/CMakeFiles/sort.dir/progress.make

# Include the compile flags for this target's objects.
include sort/CMakeFiles/sort.dir/flags.make

sort/CMakeFiles/sort.dir/bubbleSort.cpp.o: sort/CMakeFiles/sort.dir/flags.make
sort/CMakeFiles/sort.dir/bubbleSort.cpp.o: ../sort/bubbleSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghai/CLionProjects/structcpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object sort/CMakeFiles/sort.dir/bubbleSort.cpp.o"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort.dir/bubbleSort.cpp.o -c /Users/yanghai/CLionProjects/structcpp/sort/bubbleSort.cpp

sort/CMakeFiles/sort.dir/bubbleSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort.dir/bubbleSort.cpp.i"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yanghai/CLionProjects/structcpp/sort/bubbleSort.cpp > CMakeFiles/sort.dir/bubbleSort.cpp.i

sort/CMakeFiles/sort.dir/bubbleSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort.dir/bubbleSort.cpp.s"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yanghai/CLionProjects/structcpp/sort/bubbleSort.cpp -o CMakeFiles/sort.dir/bubbleSort.cpp.s

sort/CMakeFiles/sort.dir/heapSort.cpp.o: sort/CMakeFiles/sort.dir/flags.make
sort/CMakeFiles/sort.dir/heapSort.cpp.o: ../sort/heapSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghai/CLionProjects/structcpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object sort/CMakeFiles/sort.dir/heapSort.cpp.o"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort.dir/heapSort.cpp.o -c /Users/yanghai/CLionProjects/structcpp/sort/heapSort.cpp

sort/CMakeFiles/sort.dir/heapSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort.dir/heapSort.cpp.i"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yanghai/CLionProjects/structcpp/sort/heapSort.cpp > CMakeFiles/sort.dir/heapSort.cpp.i

sort/CMakeFiles/sort.dir/heapSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort.dir/heapSort.cpp.s"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yanghai/CLionProjects/structcpp/sort/heapSort.cpp -o CMakeFiles/sort.dir/heapSort.cpp.s

sort/CMakeFiles/sort.dir/init.cpp.o: sort/CMakeFiles/sort.dir/flags.make
sort/CMakeFiles/sort.dir/init.cpp.o: ../sort/init.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghai/CLionProjects/structcpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object sort/CMakeFiles/sort.dir/init.cpp.o"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort.dir/init.cpp.o -c /Users/yanghai/CLionProjects/structcpp/sort/init.cpp

sort/CMakeFiles/sort.dir/init.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort.dir/init.cpp.i"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yanghai/CLionProjects/structcpp/sort/init.cpp > CMakeFiles/sort.dir/init.cpp.i

sort/CMakeFiles/sort.dir/init.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort.dir/init.cpp.s"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yanghai/CLionProjects/structcpp/sort/init.cpp -o CMakeFiles/sort.dir/init.cpp.s

sort/CMakeFiles/sort.dir/insertSort.cpp.o: sort/CMakeFiles/sort.dir/flags.make
sort/CMakeFiles/sort.dir/insertSort.cpp.o: ../sort/insertSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghai/CLionProjects/structcpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object sort/CMakeFiles/sort.dir/insertSort.cpp.o"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort.dir/insertSort.cpp.o -c /Users/yanghai/CLionProjects/structcpp/sort/insertSort.cpp

sort/CMakeFiles/sort.dir/insertSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort.dir/insertSort.cpp.i"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yanghai/CLionProjects/structcpp/sort/insertSort.cpp > CMakeFiles/sort.dir/insertSort.cpp.i

sort/CMakeFiles/sort.dir/insertSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort.dir/insertSort.cpp.s"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yanghai/CLionProjects/structcpp/sort/insertSort.cpp -o CMakeFiles/sort.dir/insertSort.cpp.s

sort/CMakeFiles/sort.dir/mergeSort.cpp.o: sort/CMakeFiles/sort.dir/flags.make
sort/CMakeFiles/sort.dir/mergeSort.cpp.o: ../sort/mergeSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghai/CLionProjects/structcpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object sort/CMakeFiles/sort.dir/mergeSort.cpp.o"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort.dir/mergeSort.cpp.o -c /Users/yanghai/CLionProjects/structcpp/sort/mergeSort.cpp

sort/CMakeFiles/sort.dir/mergeSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort.dir/mergeSort.cpp.i"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yanghai/CLionProjects/structcpp/sort/mergeSort.cpp > CMakeFiles/sort.dir/mergeSort.cpp.i

sort/CMakeFiles/sort.dir/mergeSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort.dir/mergeSort.cpp.s"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yanghai/CLionProjects/structcpp/sort/mergeSort.cpp -o CMakeFiles/sort.dir/mergeSort.cpp.s

sort/CMakeFiles/sort.dir/quickSort.cpp.o: sort/CMakeFiles/sort.dir/flags.make
sort/CMakeFiles/sort.dir/quickSort.cpp.o: ../sort/quickSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghai/CLionProjects/structcpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object sort/CMakeFiles/sort.dir/quickSort.cpp.o"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort.dir/quickSort.cpp.o -c /Users/yanghai/CLionProjects/structcpp/sort/quickSort.cpp

sort/CMakeFiles/sort.dir/quickSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort.dir/quickSort.cpp.i"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yanghai/CLionProjects/structcpp/sort/quickSort.cpp > CMakeFiles/sort.dir/quickSort.cpp.i

sort/CMakeFiles/sort.dir/quickSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort.dir/quickSort.cpp.s"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yanghai/CLionProjects/structcpp/sort/quickSort.cpp -o CMakeFiles/sort.dir/quickSort.cpp.s

sort/CMakeFiles/sort.dir/radixSort.cpp.o: sort/CMakeFiles/sort.dir/flags.make
sort/CMakeFiles/sort.dir/radixSort.cpp.o: ../sort/radixSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghai/CLionProjects/structcpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object sort/CMakeFiles/sort.dir/radixSort.cpp.o"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort.dir/radixSort.cpp.o -c /Users/yanghai/CLionProjects/structcpp/sort/radixSort.cpp

sort/CMakeFiles/sort.dir/radixSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort.dir/radixSort.cpp.i"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yanghai/CLionProjects/structcpp/sort/radixSort.cpp > CMakeFiles/sort.dir/radixSort.cpp.i

sort/CMakeFiles/sort.dir/radixSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort.dir/radixSort.cpp.s"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yanghai/CLionProjects/structcpp/sort/radixSort.cpp -o CMakeFiles/sort.dir/radixSort.cpp.s

sort/CMakeFiles/sort.dir/selectSort.cpp.o: sort/CMakeFiles/sort.dir/flags.make
sort/CMakeFiles/sort.dir/selectSort.cpp.o: ../sort/selectSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghai/CLionProjects/structcpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object sort/CMakeFiles/sort.dir/selectSort.cpp.o"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort.dir/selectSort.cpp.o -c /Users/yanghai/CLionProjects/structcpp/sort/selectSort.cpp

sort/CMakeFiles/sort.dir/selectSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort.dir/selectSort.cpp.i"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yanghai/CLionProjects/structcpp/sort/selectSort.cpp > CMakeFiles/sort.dir/selectSort.cpp.i

sort/CMakeFiles/sort.dir/selectSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort.dir/selectSort.cpp.s"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yanghai/CLionProjects/structcpp/sort/selectSort.cpp -o CMakeFiles/sort.dir/selectSort.cpp.s

sort/CMakeFiles/sort.dir/shellSort.cpp.o: sort/CMakeFiles/sort.dir/flags.make
sort/CMakeFiles/sort.dir/shellSort.cpp.o: ../sort/shellSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghai/CLionProjects/structcpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object sort/CMakeFiles/sort.dir/shellSort.cpp.o"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort.dir/shellSort.cpp.o -c /Users/yanghai/CLionProjects/structcpp/sort/shellSort.cpp

sort/CMakeFiles/sort.dir/shellSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort.dir/shellSort.cpp.i"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yanghai/CLionProjects/structcpp/sort/shellSort.cpp > CMakeFiles/sort.dir/shellSort.cpp.i

sort/CMakeFiles/sort.dir/shellSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort.dir/shellSort.cpp.s"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yanghai/CLionProjects/structcpp/sort/shellSort.cpp -o CMakeFiles/sort.dir/shellSort.cpp.s

# Object files for target sort
sort_OBJECTS = \
"CMakeFiles/sort.dir/bubbleSort.cpp.o" \
"CMakeFiles/sort.dir/heapSort.cpp.o" \
"CMakeFiles/sort.dir/init.cpp.o" \
"CMakeFiles/sort.dir/insertSort.cpp.o" \
"CMakeFiles/sort.dir/mergeSort.cpp.o" \
"CMakeFiles/sort.dir/quickSort.cpp.o" \
"CMakeFiles/sort.dir/radixSort.cpp.o" \
"CMakeFiles/sort.dir/selectSort.cpp.o" \
"CMakeFiles/sort.dir/shellSort.cpp.o"

# External object files for target sort
sort_EXTERNAL_OBJECTS =

sort/libsort.a: sort/CMakeFiles/sort.dir/bubbleSort.cpp.o
sort/libsort.a: sort/CMakeFiles/sort.dir/heapSort.cpp.o
sort/libsort.a: sort/CMakeFiles/sort.dir/init.cpp.o
sort/libsort.a: sort/CMakeFiles/sort.dir/insertSort.cpp.o
sort/libsort.a: sort/CMakeFiles/sort.dir/mergeSort.cpp.o
sort/libsort.a: sort/CMakeFiles/sort.dir/quickSort.cpp.o
sort/libsort.a: sort/CMakeFiles/sort.dir/radixSort.cpp.o
sort/libsort.a: sort/CMakeFiles/sort.dir/selectSort.cpp.o
sort/libsort.a: sort/CMakeFiles/sort.dir/shellSort.cpp.o
sort/libsort.a: sort/CMakeFiles/sort.dir/build.make
sort/libsort.a: sort/CMakeFiles/sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yanghai/CLionProjects/structcpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library libsort.a"
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && $(CMAKE_COMMAND) -P CMakeFiles/sort.dir/cmake_clean_target.cmake
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sort/CMakeFiles/sort.dir/build: sort/libsort.a

.PHONY : sort/CMakeFiles/sort.dir/build

sort/CMakeFiles/sort.dir/clean:
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort && $(CMAKE_COMMAND) -P CMakeFiles/sort.dir/cmake_clean.cmake
.PHONY : sort/CMakeFiles/sort.dir/clean

sort/CMakeFiles/sort.dir/depend:
	cd /Users/yanghai/CLionProjects/structcpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yanghai/CLionProjects/structcpp /Users/yanghai/CLionProjects/structcpp/sort /Users/yanghai/CLionProjects/structcpp/cmake-build-debug /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort /Users/yanghai/CLionProjects/structcpp/cmake-build-debug/sort/CMakeFiles/sort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sort/CMakeFiles/sort.dir/depend

