# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /opt/local/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/meow/Documents/PDI/rob/trainer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/meow/Documents/PDI/rob/trainer

# Include any dependencies generated for this target.
include CMakeFiles/trainer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/trainer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/trainer.dir/flags.make

CMakeFiles/trainer.dir/main.cpp.o: CMakeFiles/trainer.dir/flags.make
CMakeFiles/trainer.dir/main.cpp.o: main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/meow/Documents/PDI/rob/trainer/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/trainer.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/trainer.dir/main.cpp.o -c /Users/meow/Documents/PDI/rob/trainer/main.cpp

CMakeFiles/trainer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trainer.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/meow/Documents/PDI/rob/trainer/main.cpp > CMakeFiles/trainer.dir/main.cpp.i

CMakeFiles/trainer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trainer.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/meow/Documents/PDI/rob/trainer/main.cpp -o CMakeFiles/trainer.dir/main.cpp.s

CMakeFiles/trainer.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/trainer.dir/main.cpp.o.requires

CMakeFiles/trainer.dir/main.cpp.o.provides: CMakeFiles/trainer.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/trainer.dir/build.make CMakeFiles/trainer.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/trainer.dir/main.cpp.o.provides

CMakeFiles/trainer.dir/main.cpp.o.provides.build: CMakeFiles/trainer.dir/main.cpp.o

# Object files for target trainer
trainer_OBJECTS = \
"CMakeFiles/trainer.dir/main.cpp.o"

# External object files for target trainer
trainer_EXTERNAL_OBJECTS =

trainer: CMakeFiles/trainer.dir/main.cpp.o
trainer: CMakeFiles/trainer.dir/build.make
trainer: /usr/local/lib/libopencv_videostab.2.4.7.dylib
trainer: /usr/local/lib/libopencv_video.2.4.7.dylib
trainer: /usr/local/lib/libopencv_ts.a
trainer: /usr/local/lib/libopencv_superres.2.4.7.dylib
trainer: /usr/local/lib/libopencv_stitching.2.4.7.dylib
trainer: /usr/local/lib/libopencv_photo.2.4.7.dylib
trainer: /usr/local/lib/libopencv_ocl.2.4.7.dylib
trainer: /usr/local/lib/libopencv_objdetect.2.4.7.dylib
trainer: /usr/local/lib/libopencv_nonfree.2.4.7.dylib
trainer: /usr/local/lib/libopencv_ml.2.4.7.dylib
trainer: /usr/local/lib/libopencv_legacy.2.4.7.dylib
trainer: /usr/local/lib/libopencv_imgproc.2.4.7.dylib
trainer: /usr/local/lib/libopencv_highgui.2.4.7.dylib
trainer: /usr/local/lib/libopencv_gpu.2.4.7.dylib
trainer: /usr/local/lib/libopencv_flann.2.4.7.dylib
trainer: /usr/local/lib/libopencv_features2d.2.4.7.dylib
trainer: /usr/local/lib/libopencv_core.2.4.7.dylib
trainer: /usr/local/lib/libopencv_contrib.2.4.7.dylib
trainer: /usr/local/lib/libopencv_calib3d.2.4.7.dylib
trainer: /usr/local/lib/libopencv_nonfree.2.4.7.dylib
trainer: /usr/local/lib/libopencv_ocl.2.4.7.dylib
trainer: /usr/local/lib/libopencv_gpu.2.4.7.dylib
trainer: /usr/local/lib/libopencv_photo.2.4.7.dylib
trainer: /usr/local/lib/libopencv_objdetect.2.4.7.dylib
trainer: /usr/local/lib/libopencv_legacy.2.4.7.dylib
trainer: /usr/local/lib/libopencv_video.2.4.7.dylib
trainer: /usr/local/lib/libopencv_ml.2.4.7.dylib
trainer: /usr/local/lib/libopencv_calib3d.2.4.7.dylib
trainer: /usr/local/lib/libopencv_features2d.2.4.7.dylib
trainer: /usr/local/lib/libopencv_highgui.2.4.7.dylib
trainer: /usr/local/lib/libopencv_imgproc.2.4.7.dylib
trainer: /usr/local/lib/libopencv_flann.2.4.7.dylib
trainer: /usr/local/lib/libopencv_core.2.4.7.dylib
trainer: CMakeFiles/trainer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable trainer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/trainer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/trainer.dir/build: trainer
.PHONY : CMakeFiles/trainer.dir/build

CMakeFiles/trainer.dir/requires: CMakeFiles/trainer.dir/main.cpp.o.requires
.PHONY : CMakeFiles/trainer.dir/requires

CMakeFiles/trainer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/trainer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/trainer.dir/clean

CMakeFiles/trainer.dir/depend:
	cd /Users/meow/Documents/PDI/rob/trainer && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/meow/Documents/PDI/rob/trainer /Users/meow/Documents/PDI/rob/trainer /Users/meow/Documents/PDI/rob/trainer /Users/meow/Documents/PDI/rob/trainer /Users/meow/Documents/PDI/rob/trainer/CMakeFiles/trainer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/trainer.dir/depend

