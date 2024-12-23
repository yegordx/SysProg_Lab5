# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/yegor/lab5/SysProg_Lab5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yegor/lab5/SysProg_Lab5/build

# Include any dependencies generated for this target.
include CMakeFiles/SysProg_Lab5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SysProg_Lab5.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SysProg_Lab5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SysProg_Lab5.dir/flags.make

Parser.cpp: /home/yegor/lab5/SysProg_Lab5/src/parser.y
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/yegor/lab5/SysProg_Lab5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "[BISON][Parser] Building parser with bison 3.8.2"
	/usr/bin/bison --debug --defines=/home/yegor/lab5/SysProg_Lab5/build/Parser.hpp --verbose -o /home/yegor/lab5/SysProg_Lab5/build/Parser.cpp /home/yegor/lab5/SysProg_Lab5/src/parser.y

Parser.output: Parser.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Parser.output

Parser.hpp: Parser.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate Parser.hpp

Scanner.cpp: /home/yegor/lab5/SysProg_Lab5/src/lexer.l
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/yegor/lab5/SysProg_Lab5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "[FLEX][Scanner] Building scanner with flex 2.6.4"
	/usr/bin/flex -o/home/yegor/lab5/SysProg_Lab5/build/Scanner.cpp /home/yegor/lab5/SysProg_Lab5/src/lexer.l

CMakeFiles/SysProg_Lab5.dir/Parser.cpp.o: CMakeFiles/SysProg_Lab5.dir/flags.make
CMakeFiles/SysProg_Lab5.dir/Parser.cpp.o: Parser.cpp
CMakeFiles/SysProg_Lab5.dir/Parser.cpp.o: CMakeFiles/SysProg_Lab5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/yegor/lab5/SysProg_Lab5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SysProg_Lab5.dir/Parser.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SysProg_Lab5.dir/Parser.cpp.o -MF CMakeFiles/SysProg_Lab5.dir/Parser.cpp.o.d -o CMakeFiles/SysProg_Lab5.dir/Parser.cpp.o -c /home/yegor/lab5/SysProg_Lab5/build/Parser.cpp

CMakeFiles/SysProg_Lab5.dir/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SysProg_Lab5.dir/Parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yegor/lab5/SysProg_Lab5/build/Parser.cpp > CMakeFiles/SysProg_Lab5.dir/Parser.cpp.i

CMakeFiles/SysProg_Lab5.dir/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SysProg_Lab5.dir/Parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yegor/lab5/SysProg_Lab5/build/Parser.cpp -o CMakeFiles/SysProg_Lab5.dir/Parser.cpp.s

CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.o: CMakeFiles/SysProg_Lab5.dir/flags.make
CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.o: Scanner.cpp
CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.o: Parser.hpp
CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.o: CMakeFiles/SysProg_Lab5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/yegor/lab5/SysProg_Lab5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.o -MF CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.o.d -o CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.o -c /home/yegor/lab5/SysProg_Lab5/build/Scanner.cpp

CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yegor/lab5/SysProg_Lab5/build/Scanner.cpp > CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.i

CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yegor/lab5/SysProg_Lab5/build/Scanner.cpp -o CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.s

CMakeFiles/SysProg_Lab5.dir/src/main.cpp.o: CMakeFiles/SysProg_Lab5.dir/flags.make
CMakeFiles/SysProg_Lab5.dir/src/main.cpp.o: /home/yegor/lab5/SysProg_Lab5/src/main.cpp
CMakeFiles/SysProg_Lab5.dir/src/main.cpp.o: CMakeFiles/SysProg_Lab5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/yegor/lab5/SysProg_Lab5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SysProg_Lab5.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SysProg_Lab5.dir/src/main.cpp.o -MF CMakeFiles/SysProg_Lab5.dir/src/main.cpp.o.d -o CMakeFiles/SysProg_Lab5.dir/src/main.cpp.o -c /home/yegor/lab5/SysProg_Lab5/src/main.cpp

CMakeFiles/SysProg_Lab5.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SysProg_Lab5.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yegor/lab5/SysProg_Lab5/src/main.cpp > CMakeFiles/SysProg_Lab5.dir/src/main.cpp.i

CMakeFiles/SysProg_Lab5.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SysProg_Lab5.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yegor/lab5/SysProg_Lab5/src/main.cpp -o CMakeFiles/SysProg_Lab5.dir/src/main.cpp.s

CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.o: CMakeFiles/SysProg_Lab5.dir/flags.make
CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.o: /home/yegor/lab5/SysProg_Lab5/src/cli.cpp
CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.o: CMakeFiles/SysProg_Lab5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/yegor/lab5/SysProg_Lab5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.o -MF CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.o.d -o CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.o -c /home/yegor/lab5/SysProg_Lab5/src/cli.cpp

CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yegor/lab5/SysProg_Lab5/src/cli.cpp > CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.i

CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yegor/lab5/SysProg_Lab5/src/cli.cpp -o CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.s

CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.o: CMakeFiles/SysProg_Lab5.dir/flags.make
CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.o: /home/yegor/lab5/SysProg_Lab5/src/ast/TreeNode.cpp
CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.o: CMakeFiles/SysProg_Lab5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/yegor/lab5/SysProg_Lab5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.o -MF CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.o.d -o CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.o -c /home/yegor/lab5/SysProg_Lab5/src/ast/TreeNode.cpp

CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yegor/lab5/SysProg_Lab5/src/ast/TreeNode.cpp > CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.i

CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yegor/lab5/SysProg_Lab5/src/ast/TreeNode.cpp -o CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.s

CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.o: CMakeFiles/SysProg_Lab5.dir/flags.make
CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.o: /home/yegor/lab5/SysProg_Lab5/src/ast/TreeVisualizer.cpp
CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.o: CMakeFiles/SysProg_Lab5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/yegor/lab5/SysProg_Lab5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.o -MF CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.o.d -o CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.o -c /home/yegor/lab5/SysProg_Lab5/src/ast/TreeVisualizer.cpp

CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yegor/lab5/SysProg_Lab5/src/ast/TreeVisualizer.cpp > CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.i

CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yegor/lab5/SysProg_Lab5/src/ast/TreeVisualizer.cpp -o CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.s

# Object files for target SysProg_Lab5
SysProg_Lab5_OBJECTS = \
"CMakeFiles/SysProg_Lab5.dir/Parser.cpp.o" \
"CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.o" \
"CMakeFiles/SysProg_Lab5.dir/src/main.cpp.o" \
"CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.o" \
"CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.o" \
"CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.o"

# External object files for target SysProg_Lab5
SysProg_Lab5_EXTERNAL_OBJECTS =

SysProg_Lab5: CMakeFiles/SysProg_Lab5.dir/Parser.cpp.o
SysProg_Lab5: CMakeFiles/SysProg_Lab5.dir/Scanner.cpp.o
SysProg_Lab5: CMakeFiles/SysProg_Lab5.dir/src/main.cpp.o
SysProg_Lab5: CMakeFiles/SysProg_Lab5.dir/src/cli.cpp.o
SysProg_Lab5: CMakeFiles/SysProg_Lab5.dir/src/ast/TreeNode.cpp.o
SysProg_Lab5: CMakeFiles/SysProg_Lab5.dir/src/ast/TreeVisualizer.cpp.o
SysProg_Lab5: CMakeFiles/SysProg_Lab5.dir/build.make
SysProg_Lab5: /usr/lib/x86_64-linux-gnu/libfl.so
SysProg_Lab5: CMakeFiles/SysProg_Lab5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/yegor/lab5/SysProg_Lab5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable SysProg_Lab5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SysProg_Lab5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SysProg_Lab5.dir/build: SysProg_Lab5
.PHONY : CMakeFiles/SysProg_Lab5.dir/build

CMakeFiles/SysProg_Lab5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SysProg_Lab5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SysProg_Lab5.dir/clean

CMakeFiles/SysProg_Lab5.dir/depend: Parser.cpp
CMakeFiles/SysProg_Lab5.dir/depend: Parser.hpp
CMakeFiles/SysProg_Lab5.dir/depend: Parser.output
CMakeFiles/SysProg_Lab5.dir/depend: Scanner.cpp
	cd /home/yegor/lab5/SysProg_Lab5/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yegor/lab5/SysProg_Lab5 /home/yegor/lab5/SysProg_Lab5 /home/yegor/lab5/SysProg_Lab5/build /home/yegor/lab5/SysProg_Lab5/build /home/yegor/lab5/SysProg_Lab5/build/CMakeFiles/SysProg_Lab5.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/SysProg_Lab5.dir/depend

