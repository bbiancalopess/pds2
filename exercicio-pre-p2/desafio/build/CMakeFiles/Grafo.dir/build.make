# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/build

# Include any dependencies generated for this target.
include CMakeFiles/Grafo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Grafo.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Grafo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Grafo.dir/flags.make

CMakeFiles/Grafo.dir/grafo.cpp.o: CMakeFiles/Grafo.dir/flags.make
CMakeFiles/Grafo.dir/grafo.cpp.o: ../grafo.cpp
CMakeFiles/Grafo.dir/grafo.cpp.o: CMakeFiles/Grafo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Grafo.dir/grafo.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Grafo.dir/grafo.cpp.o -MF CMakeFiles/Grafo.dir/grafo.cpp.o.d -o CMakeFiles/Grafo.dir/grafo.cpp.o -c /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/grafo.cpp

CMakeFiles/Grafo.dir/grafo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Grafo.dir/grafo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/grafo.cpp > CMakeFiles/Grafo.dir/grafo.cpp.i

CMakeFiles/Grafo.dir/grafo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Grafo.dir/grafo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/grafo.cpp -o CMakeFiles/Grafo.dir/grafo.cpp.s

CMakeFiles/Grafo.dir/main.cpp.o: CMakeFiles/Grafo.dir/flags.make
CMakeFiles/Grafo.dir/main.cpp.o: ../main.cpp
CMakeFiles/Grafo.dir/main.cpp.o: CMakeFiles/Grafo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Grafo.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Grafo.dir/main.cpp.o -MF CMakeFiles/Grafo.dir/main.cpp.o.d -o CMakeFiles/Grafo.dir/main.cpp.o -c /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/main.cpp

CMakeFiles/Grafo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Grafo.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/main.cpp > CMakeFiles/Grafo.dir/main.cpp.i

CMakeFiles/Grafo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Grafo.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/main.cpp -o CMakeFiles/Grafo.dir/main.cpp.s

# Object files for target Grafo
Grafo_OBJECTS = \
"CMakeFiles/Grafo.dir/grafo.cpp.o" \
"CMakeFiles/Grafo.dir/main.cpp.o"

# External object files for target Grafo
Grafo_EXTERNAL_OBJECTS =

Grafo: CMakeFiles/Grafo.dir/grafo.cpp.o
Grafo: CMakeFiles/Grafo.dir/main.cpp.o
Grafo: CMakeFiles/Grafo.dir/build.make
Grafo: CMakeFiles/Grafo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Grafo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Grafo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Grafo.dir/build: Grafo
.PHONY : CMakeFiles/Grafo.dir/build

CMakeFiles/Grafo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Grafo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Grafo.dir/clean

CMakeFiles/Grafo.dir/depend:
	cd /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/build /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/build /mnt/c/Users/bianc/Documents/ufmg/20241/pds-2/exercicio-pre-p2/desafio/build/CMakeFiles/Grafo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Grafo.dir/depend
