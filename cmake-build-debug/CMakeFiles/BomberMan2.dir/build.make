# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /goinfre/janhoon/Desktop/BomberMan

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /goinfre/janhoon/Desktop/BomberMan/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BomberMan2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BomberMan2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BomberMan2.dir/flags.make

CMakeFiles/BomberMan2.dir/main.cpp.o: CMakeFiles/BomberMan2.dir/flags.make
CMakeFiles/BomberMan2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/janhoon/Desktop/BomberMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BomberMan2.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BomberMan2.dir/main.cpp.o -c /goinfre/janhoon/Desktop/BomberMan/main.cpp

CMakeFiles/BomberMan2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BomberMan2.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/janhoon/Desktop/BomberMan/main.cpp > CMakeFiles/BomberMan2.dir/main.cpp.i

CMakeFiles/BomberMan2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BomberMan2.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/janhoon/Desktop/BomberMan/main.cpp -o CMakeFiles/BomberMan2.dir/main.cpp.s

CMakeFiles/BomberMan2.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/BomberMan2.dir/main.cpp.o.requires

CMakeFiles/BomberMan2.dir/main.cpp.o.provides: CMakeFiles/BomberMan2.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/BomberMan2.dir/build.make CMakeFiles/BomberMan2.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/BomberMan2.dir/main.cpp.o.provides

CMakeFiles/BomberMan2.dir/main.cpp.o.provides.build: CMakeFiles/BomberMan2.dir/main.cpp.o


CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o: CMakeFiles/BomberMan2.dir/flags.make
CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o: ../sources/Graphics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/janhoon/Desktop/BomberMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o -c /goinfre/janhoon/Desktop/BomberMan/sources/Graphics.cpp

CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/janhoon/Desktop/BomberMan/sources/Graphics.cpp > CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.i

CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/janhoon/Desktop/BomberMan/sources/Graphics.cpp -o CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.s

CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o.requires:

.PHONY : CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o.requires

CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o.provides: CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o.requires
	$(MAKE) -f CMakeFiles/BomberMan2.dir/build.make CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o.provides.build
.PHONY : CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o.provides

CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o.provides.build: CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o


CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o: CMakeFiles/BomberMan2.dir/flags.make
CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o: ../sources/Shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/janhoon/Desktop/BomberMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o -c /goinfre/janhoon/Desktop/BomberMan/sources/Shader.cpp

CMakeFiles/BomberMan2.dir/sources/Shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BomberMan2.dir/sources/Shader.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/janhoon/Desktop/BomberMan/sources/Shader.cpp > CMakeFiles/BomberMan2.dir/sources/Shader.cpp.i

CMakeFiles/BomberMan2.dir/sources/Shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BomberMan2.dir/sources/Shader.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/janhoon/Desktop/BomberMan/sources/Shader.cpp -o CMakeFiles/BomberMan2.dir/sources/Shader.cpp.s

CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o.requires:

.PHONY : CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o.requires

CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o.provides: CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o.requires
	$(MAKE) -f CMakeFiles/BomberMan2.dir/build.make CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o.provides.build
.PHONY : CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o.provides

CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o.provides.build: CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o


CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o: CMakeFiles/BomberMan2.dir/flags.make
CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o: ../sources/Mesh.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/janhoon/Desktop/BomberMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o -c /goinfre/janhoon/Desktop/BomberMan/sources/Mesh.cpp

CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/janhoon/Desktop/BomberMan/sources/Mesh.cpp > CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.i

CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/janhoon/Desktop/BomberMan/sources/Mesh.cpp -o CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.s

CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o.requires:

.PHONY : CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o.requires

CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o.provides: CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o.requires
	$(MAKE) -f CMakeFiles/BomberMan2.dir/build.make CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o.provides.build
.PHONY : CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o.provides

CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o.provides.build: CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o


CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o: CMakeFiles/BomberMan2.dir/flags.make
CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o: ../sources/Texture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/janhoon/Desktop/BomberMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o -c /goinfre/janhoon/Desktop/BomberMan/sources/Texture.cpp

CMakeFiles/BomberMan2.dir/sources/Texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BomberMan2.dir/sources/Texture.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/janhoon/Desktop/BomberMan/sources/Texture.cpp > CMakeFiles/BomberMan2.dir/sources/Texture.cpp.i

CMakeFiles/BomberMan2.dir/sources/Texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BomberMan2.dir/sources/Texture.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/janhoon/Desktop/BomberMan/sources/Texture.cpp -o CMakeFiles/BomberMan2.dir/sources/Texture.cpp.s

CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o.requires:

.PHONY : CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o.requires

CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o.provides: CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o.requires
	$(MAKE) -f CMakeFiles/BomberMan2.dir/build.make CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o.provides.build
.PHONY : CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o.provides

CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o.provides.build: CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o


CMakeFiles/BomberMan2.dir/sources/stb_image.c.o: CMakeFiles/BomberMan2.dir/flags.make
CMakeFiles/BomberMan2.dir/sources/stb_image.c.o: ../sources/stb_image.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/janhoon/Desktop/BomberMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/BomberMan2.dir/sources/stb_image.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/BomberMan2.dir/sources/stb_image.c.o   -c /goinfre/janhoon/Desktop/BomberMan/sources/stb_image.c

CMakeFiles/BomberMan2.dir/sources/stb_image.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BomberMan2.dir/sources/stb_image.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /goinfre/janhoon/Desktop/BomberMan/sources/stb_image.c > CMakeFiles/BomberMan2.dir/sources/stb_image.c.i

CMakeFiles/BomberMan2.dir/sources/stb_image.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BomberMan2.dir/sources/stb_image.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /goinfre/janhoon/Desktop/BomberMan/sources/stb_image.c -o CMakeFiles/BomberMan2.dir/sources/stb_image.c.s

CMakeFiles/BomberMan2.dir/sources/stb_image.c.o.requires:

.PHONY : CMakeFiles/BomberMan2.dir/sources/stb_image.c.o.requires

CMakeFiles/BomberMan2.dir/sources/stb_image.c.o.provides: CMakeFiles/BomberMan2.dir/sources/stb_image.c.o.requires
	$(MAKE) -f CMakeFiles/BomberMan2.dir/build.make CMakeFiles/BomberMan2.dir/sources/stb_image.c.o.provides.build
.PHONY : CMakeFiles/BomberMan2.dir/sources/stb_image.c.o.provides

CMakeFiles/BomberMan2.dir/sources/stb_image.c.o.provides.build: CMakeFiles/BomberMan2.dir/sources/stb_image.c.o


CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o: CMakeFiles/BomberMan2.dir/flags.make
CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o: ../sources/Transform.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/janhoon/Desktop/BomberMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o -c /goinfre/janhoon/Desktop/BomberMan/sources/Transform.cpp

CMakeFiles/BomberMan2.dir/sources/Transform.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BomberMan2.dir/sources/Transform.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/janhoon/Desktop/BomberMan/sources/Transform.cpp > CMakeFiles/BomberMan2.dir/sources/Transform.cpp.i

CMakeFiles/BomberMan2.dir/sources/Transform.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BomberMan2.dir/sources/Transform.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/janhoon/Desktop/BomberMan/sources/Transform.cpp -o CMakeFiles/BomberMan2.dir/sources/Transform.cpp.s

CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o.requires:

.PHONY : CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o.requires

CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o.provides: CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o.requires
	$(MAKE) -f CMakeFiles/BomberMan2.dir/build.make CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o.provides.build
.PHONY : CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o.provides

CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o.provides.build: CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o


CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o: CMakeFiles/BomberMan2.dir/flags.make
CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o: ../sources/Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/janhoon/Desktop/BomberMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o -c /goinfre/janhoon/Desktop/BomberMan/sources/Camera.cpp

CMakeFiles/BomberMan2.dir/sources/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BomberMan2.dir/sources/Camera.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/janhoon/Desktop/BomberMan/sources/Camera.cpp > CMakeFiles/BomberMan2.dir/sources/Camera.cpp.i

CMakeFiles/BomberMan2.dir/sources/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BomberMan2.dir/sources/Camera.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/janhoon/Desktop/BomberMan/sources/Camera.cpp -o CMakeFiles/BomberMan2.dir/sources/Camera.cpp.s

CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o.requires:

.PHONY : CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o.requires

CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o.provides: CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o.requires
	$(MAKE) -f CMakeFiles/BomberMan2.dir/build.make CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o.provides.build
.PHONY : CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o.provides

CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o.provides.build: CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o


CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o: CMakeFiles/BomberMan2.dir/flags.make
CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o: ../sources/obj_loader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/janhoon/Desktop/BomberMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o -c /goinfre/janhoon/Desktop/BomberMan/sources/obj_loader.cpp

CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/janhoon/Desktop/BomberMan/sources/obj_loader.cpp > CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.i

CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/janhoon/Desktop/BomberMan/sources/obj_loader.cpp -o CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.s

CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o.requires:

.PHONY : CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o.requires

CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o.provides: CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o.requires
	$(MAKE) -f CMakeFiles/BomberMan2.dir/build.make CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o.provides.build
.PHONY : CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o.provides

CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o.provides.build: CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o


CMakeFiles/BomberMan2.dir/sources/Object.cpp.o: CMakeFiles/BomberMan2.dir/flags.make
CMakeFiles/BomberMan2.dir/sources/Object.cpp.o: ../sources/Object.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/janhoon/Desktop/BomberMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/BomberMan2.dir/sources/Object.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BomberMan2.dir/sources/Object.cpp.o -c /goinfre/janhoon/Desktop/BomberMan/sources/Object.cpp

CMakeFiles/BomberMan2.dir/sources/Object.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BomberMan2.dir/sources/Object.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/janhoon/Desktop/BomberMan/sources/Object.cpp > CMakeFiles/BomberMan2.dir/sources/Object.cpp.i

CMakeFiles/BomberMan2.dir/sources/Object.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BomberMan2.dir/sources/Object.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/janhoon/Desktop/BomberMan/sources/Object.cpp -o CMakeFiles/BomberMan2.dir/sources/Object.cpp.s

CMakeFiles/BomberMan2.dir/sources/Object.cpp.o.requires:

.PHONY : CMakeFiles/BomberMan2.dir/sources/Object.cpp.o.requires

CMakeFiles/BomberMan2.dir/sources/Object.cpp.o.provides: CMakeFiles/BomberMan2.dir/sources/Object.cpp.o.requires
	$(MAKE) -f CMakeFiles/BomberMan2.dir/build.make CMakeFiles/BomberMan2.dir/sources/Object.cpp.o.provides.build
.PHONY : CMakeFiles/BomberMan2.dir/sources/Object.cpp.o.provides

CMakeFiles/BomberMan2.dir/sources/Object.cpp.o.provides.build: CMakeFiles/BomberMan2.dir/sources/Object.cpp.o


CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o: CMakeFiles/BomberMan2.dir/flags.make
CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o: ../sources/Engine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/janhoon/Desktop/BomberMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o -c /goinfre/janhoon/Desktop/BomberMan/sources/Engine.cpp

CMakeFiles/BomberMan2.dir/sources/Engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BomberMan2.dir/sources/Engine.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/janhoon/Desktop/BomberMan/sources/Engine.cpp > CMakeFiles/BomberMan2.dir/sources/Engine.cpp.i

CMakeFiles/BomberMan2.dir/sources/Engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BomberMan2.dir/sources/Engine.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/janhoon/Desktop/BomberMan/sources/Engine.cpp -o CMakeFiles/BomberMan2.dir/sources/Engine.cpp.s

CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o.requires:

.PHONY : CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o.requires

CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o.provides: CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o.requires
	$(MAKE) -f CMakeFiles/BomberMan2.dir/build.make CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o.provides.build
.PHONY : CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o.provides

CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o.provides.build: CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o


# Object files for target BomberMan2
BomberMan2_OBJECTS = \
"CMakeFiles/BomberMan2.dir/main.cpp.o" \
"CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o" \
"CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o" \
"CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o" \
"CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o" \
"CMakeFiles/BomberMan2.dir/sources/stb_image.c.o" \
"CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o" \
"CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o" \
"CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o" \
"CMakeFiles/BomberMan2.dir/sources/Object.cpp.o" \
"CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o"

# External object files for target BomberMan2
BomberMan2_EXTERNAL_OBJECTS =

BomberMan2: CMakeFiles/BomberMan2.dir/main.cpp.o
BomberMan2: CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o
BomberMan2: CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o
BomberMan2: CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o
BomberMan2: CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o
BomberMan2: CMakeFiles/BomberMan2.dir/sources/stb_image.c.o
BomberMan2: CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o
BomberMan2: CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o
BomberMan2: CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o
BomberMan2: CMakeFiles/BomberMan2.dir/sources/Object.cpp.o
BomberMan2: CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o
BomberMan2: CMakeFiles/BomberMan2.dir/build.make
BomberMan2: CMakeFiles/BomberMan2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/goinfre/janhoon/Desktop/BomberMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable BomberMan2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BomberMan2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BomberMan2.dir/build: BomberMan2

.PHONY : CMakeFiles/BomberMan2.dir/build

CMakeFiles/BomberMan2.dir/requires: CMakeFiles/BomberMan2.dir/main.cpp.o.requires
CMakeFiles/BomberMan2.dir/requires: CMakeFiles/BomberMan2.dir/sources/Graphics.cpp.o.requires
CMakeFiles/BomberMan2.dir/requires: CMakeFiles/BomberMan2.dir/sources/Shader.cpp.o.requires
CMakeFiles/BomberMan2.dir/requires: CMakeFiles/BomberMan2.dir/sources/Mesh.cpp.o.requires
CMakeFiles/BomberMan2.dir/requires: CMakeFiles/BomberMan2.dir/sources/Texture.cpp.o.requires
CMakeFiles/BomberMan2.dir/requires: CMakeFiles/BomberMan2.dir/sources/stb_image.c.o.requires
CMakeFiles/BomberMan2.dir/requires: CMakeFiles/BomberMan2.dir/sources/Transform.cpp.o.requires
CMakeFiles/BomberMan2.dir/requires: CMakeFiles/BomberMan2.dir/sources/Camera.cpp.o.requires
CMakeFiles/BomberMan2.dir/requires: CMakeFiles/BomberMan2.dir/sources/obj_loader.cpp.o.requires
CMakeFiles/BomberMan2.dir/requires: CMakeFiles/BomberMan2.dir/sources/Object.cpp.o.requires
CMakeFiles/BomberMan2.dir/requires: CMakeFiles/BomberMan2.dir/sources/Engine.cpp.o.requires

.PHONY : CMakeFiles/BomberMan2.dir/requires

CMakeFiles/BomberMan2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BomberMan2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BomberMan2.dir/clean

CMakeFiles/BomberMan2.dir/depend:
	cd /goinfre/janhoon/Desktop/BomberMan/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /goinfre/janhoon/Desktop/BomberMan /goinfre/janhoon/Desktop/BomberMan /goinfre/janhoon/Desktop/BomberMan/cmake-build-debug /goinfre/janhoon/Desktop/BomberMan/cmake-build-debug /goinfre/janhoon/Desktop/BomberMan/cmake-build-debug/CMakeFiles/BomberMan2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BomberMan2.dir/depend

