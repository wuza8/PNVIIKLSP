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
CMAKE_SOURCE_DIR = /home/user/git/PNVIIKLSP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/git/PNVIIKLSP/build

# Include any dependencies generated for this target.
include CMakeFiles/PNVIIKLSP.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PNVIIKLSP.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PNVIIKLSP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PNVIIKLSP.dir/flags.make

CMakeFiles/PNVIIKLSP.dir/main.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/main.cpp.o: ../main.cpp
CMakeFiles/PNVIIKLSP.dir/main.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PNVIIKLSP.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/main.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/main.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/main.cpp.o -c /home/user/git/PNVIIKLSP/main.cpp

CMakeFiles/PNVIIKLSP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/main.cpp > CMakeFiles/PNVIIKLSP.dir/main.cpp.i

CMakeFiles/PNVIIKLSP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/main.cpp -o CMakeFiles/PNVIIKLSP.dir/main.cpp.s

CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.o: ../pnviiklsp.cpp
CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.o -c /home/user/git/PNVIIKLSP/pnviiklsp.cpp

CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/pnviiklsp.cpp > CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.i

CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/pnviiklsp.cpp -o CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.s

CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.o: ../math/vertex.cpp
CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.o -c /home/user/git/PNVIIKLSP/math/vertex.cpp

CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/math/vertex.cpp > CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.i

CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/math/vertex.cpp -o CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.s

CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.o: ../math/linearfunction.cpp
CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.o -c /home/user/git/PNVIIKLSP/math/linearfunction.cpp

CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/math/linearfunction.cpp > CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.i

CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/math/linearfunction.cpp -o CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.s

CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.o: ../cmdline/cmdfunctionloader.cpp
CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.o -c /home/user/git/PNVIIKLSP/cmdline/cmdfunctionloader.cpp

CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/cmdline/cmdfunctionloader.cpp > CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.i

CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/cmdline/cmdfunctionloader.cpp -o CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.s

CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.o: ../cmdline/cmdregistry.cpp
CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.o -c /home/user/git/PNVIIKLSP/cmdline/cmdregistry.cpp

CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/cmdline/cmdregistry.cpp > CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.i

CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/cmdline/cmdregistry.cpp -o CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.s

CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.o: ../cmdline/inlinecommandhandler.cpp
CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.o -c /home/user/git/PNVIIKLSP/cmdline/inlinecommandhandler.cpp

CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/cmdline/inlinecommandhandler.cpp > CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.i

CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/cmdline/inlinecommandhandler.cpp -o CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.s

CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.o: ../cmdline/helpcommand.cpp
CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.o -c /home/user/git/PNVIIKLSP/cmdline/helpcommand.cpp

CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/cmdline/helpcommand.cpp > CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.i

CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/cmdline/helpcommand.cpp -o CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.s

CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.o: ../services/functionservice.cpp
CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.o -c /home/user/git/PNVIIKLSP/services/functionservice.cpp

CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/services/functionservice.cpp > CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.i

CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/services/functionservice.cpp -o CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.s

CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.o: ../renderer/renderer.cpp
CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.o -c /home/user/git/PNVIIKLSP/renderer/renderer.cpp

CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/renderer/renderer.cpp > CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.i

CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/renderer/renderer.cpp -o CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.s

CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.o: ../renderer/color.cpp
CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.o -c /home/user/git/PNVIIKLSP/renderer/color.cpp

CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/renderer/color.cpp > CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.i

CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/renderer/color.cpp -o CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.s

CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.o: ../renderer/colored.cpp
CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.o -c /home/user/git/PNVIIKLSP/renderer/colored.cpp

CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/renderer/colored.cpp > CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.i

CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/renderer/colored.cpp -o CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.s

CMakeFiles/PNVIIKLSP.dir/math/line.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/math/line.cpp.o: ../math/line.cpp
CMakeFiles/PNVIIKLSP.dir/math/line.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/PNVIIKLSP.dir/math/line.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/math/line.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/math/line.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/math/line.cpp.o -c /home/user/git/PNVIIKLSP/math/line.cpp

CMakeFiles/PNVIIKLSP.dir/math/line.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/math/line.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/math/line.cpp > CMakeFiles/PNVIIKLSP.dir/math/line.cpp.i

CMakeFiles/PNVIIKLSP.dir/math/line.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/math/line.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/math/line.cpp -o CMakeFiles/PNVIIKLSP.dir/math/line.cpp.s

CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.o: ../math/triangle.cpp
CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.o -c /home/user/git/PNVIIKLSP/math/triangle.cpp

CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/math/triangle.cpp > CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.i

CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/math/triangle.cpp -o CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.s

CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.o: ../math/wezel.cpp
CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.o -c /home/user/git/PNVIIKLSP/math/wezel.cpp

CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/math/wezel.cpp > CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.i

CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/math/wezel.cpp -o CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.s

CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.o: CMakeFiles/PNVIIKLSP.dir/flags.make
CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.o: ../utils/named.cpp
CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.o: CMakeFiles/PNVIIKLSP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.o -MF CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.o.d -o CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.o -c /home/user/git/PNVIIKLSP/utils/named.cpp

CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/git/PNVIIKLSP/utils/named.cpp > CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.i

CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/git/PNVIIKLSP/utils/named.cpp -o CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.s

# Object files for target PNVIIKLSP
PNVIIKLSP_OBJECTS = \
"CMakeFiles/PNVIIKLSP.dir/main.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/math/line.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.o" \
"CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.o"

# External object files for target PNVIIKLSP
PNVIIKLSP_EXTERNAL_OBJECTS =

PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/main.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/pnviiklsp.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/math/vertex.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/math/linearfunction.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/cmdline/cmdfunctionloader.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/cmdline/cmdregistry.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/cmdline/inlinecommandhandler.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/cmdline/helpcommand.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/services/functionservice.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/renderer/renderer.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/renderer/color.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/renderer/colored.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/math/line.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/math/triangle.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/math/wezel.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/utils/named.cpp.o
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/build.make
PNVIIKLSP: CMakeFiles/PNVIIKLSP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/git/PNVIIKLSP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable PNVIIKLSP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PNVIIKLSP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PNVIIKLSP.dir/build: PNVIIKLSP
.PHONY : CMakeFiles/PNVIIKLSP.dir/build

CMakeFiles/PNVIIKLSP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PNVIIKLSP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PNVIIKLSP.dir/clean

CMakeFiles/PNVIIKLSP.dir/depend:
	cd /home/user/git/PNVIIKLSP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/git/PNVIIKLSP /home/user/git/PNVIIKLSP /home/user/git/PNVIIKLSP/build /home/user/git/PNVIIKLSP/build /home/user/git/PNVIIKLSP/build/CMakeFiles/PNVIIKLSP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PNVIIKLSP.dir/depend

