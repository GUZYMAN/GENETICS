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
CMAKE_COMMAND = /opt/clion-2017.2.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.2.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gerald/CLionProjects/Genetics

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gerald/CLionProjects/Genetics/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Genetics.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Genetics.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Genetics.dir/flags.make

CMakeFiles/Genetics.dir/main.cpp.o: CMakeFiles/Genetics.dir/flags.make
CMakeFiles/Genetics.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gerald/CLionProjects/Genetics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Genetics.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Genetics.dir/main.cpp.o -c /home/gerald/CLionProjects/Genetics/main.cpp

CMakeFiles/Genetics.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Genetics.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gerald/CLionProjects/Genetics/main.cpp > CMakeFiles/Genetics.dir/main.cpp.i

CMakeFiles/Genetics.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Genetics.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gerald/CLionProjects/Genetics/main.cpp -o CMakeFiles/Genetics.dir/main.cpp.s

CMakeFiles/Genetics.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Genetics.dir/main.cpp.o.requires

CMakeFiles/Genetics.dir/main.cpp.o.provides: CMakeFiles/Genetics.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Genetics.dir/build.make CMakeFiles/Genetics.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Genetics.dir/main.cpp.o.provides

CMakeFiles/Genetics.dir/main.cpp.o.provides.build: CMakeFiles/Genetics.dir/main.cpp.o


CMakeFiles/Genetics.dir/Ventana.cpp.o: CMakeFiles/Genetics.dir/flags.make
CMakeFiles/Genetics.dir/Ventana.cpp.o: ../Ventana.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gerald/CLionProjects/Genetics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Genetics.dir/Ventana.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Genetics.dir/Ventana.cpp.o -c /home/gerald/CLionProjects/Genetics/Ventana.cpp

CMakeFiles/Genetics.dir/Ventana.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Genetics.dir/Ventana.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gerald/CLionProjects/Genetics/Ventana.cpp > CMakeFiles/Genetics.dir/Ventana.cpp.i

CMakeFiles/Genetics.dir/Ventana.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Genetics.dir/Ventana.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gerald/CLionProjects/Genetics/Ventana.cpp -o CMakeFiles/Genetics.dir/Ventana.cpp.s

CMakeFiles/Genetics.dir/Ventana.cpp.o.requires:

.PHONY : CMakeFiles/Genetics.dir/Ventana.cpp.o.requires

CMakeFiles/Genetics.dir/Ventana.cpp.o.provides: CMakeFiles/Genetics.dir/Ventana.cpp.o.requires
	$(MAKE) -f CMakeFiles/Genetics.dir/build.make CMakeFiles/Genetics.dir/Ventana.cpp.o.provides.build
.PHONY : CMakeFiles/Genetics.dir/Ventana.cpp.o.provides

CMakeFiles/Genetics.dir/Ventana.cpp.o.provides.build: CMakeFiles/Genetics.dir/Ventana.cpp.o


CMakeFiles/Genetics.dir/data.cpp.o: CMakeFiles/Genetics.dir/flags.make
CMakeFiles/Genetics.dir/data.cpp.o: ../data.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gerald/CLionProjects/Genetics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Genetics.dir/data.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Genetics.dir/data.cpp.o -c /home/gerald/CLionProjects/Genetics/data.cpp

CMakeFiles/Genetics.dir/data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Genetics.dir/data.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gerald/CLionProjects/Genetics/data.cpp > CMakeFiles/Genetics.dir/data.cpp.i

CMakeFiles/Genetics.dir/data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Genetics.dir/data.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gerald/CLionProjects/Genetics/data.cpp -o CMakeFiles/Genetics.dir/data.cpp.s

CMakeFiles/Genetics.dir/data.cpp.o.requires:

.PHONY : CMakeFiles/Genetics.dir/data.cpp.o.requires

CMakeFiles/Genetics.dir/data.cpp.o.provides: CMakeFiles/Genetics.dir/data.cpp.o.requires
	$(MAKE) -f CMakeFiles/Genetics.dir/build.make CMakeFiles/Genetics.dir/data.cpp.o.provides.build
.PHONY : CMakeFiles/Genetics.dir/data.cpp.o.provides

CMakeFiles/Genetics.dir/data.cpp.o.provides.build: CMakeFiles/Genetics.dir/data.cpp.o


# Object files for target Genetics
Genetics_OBJECTS = \
"CMakeFiles/Genetics.dir/main.cpp.o" \
"CMakeFiles/Genetics.dir/Ventana.cpp.o" \
"CMakeFiles/Genetics.dir/data.cpp.o"

# External object files for target Genetics
Genetics_EXTERNAL_OBJECTS =

Genetics: CMakeFiles/Genetics.dir/main.cpp.o
Genetics: CMakeFiles/Genetics.dir/Ventana.cpp.o
Genetics: CMakeFiles/Genetics.dir/data.cpp.o
Genetics: CMakeFiles/Genetics.dir/build.make
Genetics: /usr/local/lib/libopencv_stitching.so.3.3.0
Genetics: /usr/local/lib/libopencv_superres.so.3.3.0
Genetics: /usr/local/lib/libopencv_videostab.so.3.3.0
Genetics: /usr/local/lib/libopencv_aruco.so.3.3.0
Genetics: /usr/local/lib/libopencv_bgsegm.so.3.3.0
Genetics: /usr/local/lib/libopencv_bioinspired.so.3.3.0
Genetics: /usr/local/lib/libopencv_ccalib.so.3.3.0
Genetics: /usr/local/lib/libopencv_dpm.so.3.3.0
Genetics: /usr/local/lib/libopencv_face.so.3.3.0
Genetics: /usr/local/lib/libopencv_freetype.so.3.3.0
Genetics: /usr/local/lib/libopencv_fuzzy.so.3.3.0
Genetics: /usr/local/lib/libopencv_img_hash.so.3.3.0
Genetics: /usr/local/lib/libopencv_line_descriptor.so.3.3.0
Genetics: /usr/local/lib/libopencv_optflow.so.3.3.0
Genetics: /usr/local/lib/libopencv_reg.so.3.3.0
Genetics: /usr/local/lib/libopencv_rgbd.so.3.3.0
Genetics: /usr/local/lib/libopencv_saliency.so.3.3.0
Genetics: /usr/local/lib/libopencv_stereo.so.3.3.0
Genetics: /usr/local/lib/libopencv_structured_light.so.3.3.0
Genetics: /usr/local/lib/libopencv_surface_matching.so.3.3.0
Genetics: /usr/local/lib/libopencv_tracking.so.3.3.0
Genetics: /usr/local/lib/libopencv_xfeatures2d.so.3.3.0
Genetics: /usr/local/lib/libopencv_ximgproc.so.3.3.0
Genetics: /usr/local/lib/libopencv_xobjdetect.so.3.3.0
Genetics: /usr/local/lib/libopencv_xphoto.so.3.3.0
Genetics: /usr/local/lib/libwx_gtk2u_core-3.1.a
Genetics: /usr/local/lib/libwx_baseu-3.1.a
Genetics: /usr/local/lib/libopencv_shape.so.3.3.0
Genetics: /usr/local/lib/libopencv_photo.so.3.3.0
Genetics: /usr/local/lib/libopencv_calib3d.so.3.3.0
Genetics: /usr/local/lib/libopencv_phase_unwrapping.so.3.3.0
Genetics: /usr/local/lib/libopencv_video.so.3.3.0
Genetics: /usr/local/lib/libopencv_datasets.so.3.3.0
Genetics: /usr/local/lib/libopencv_plot.so.3.3.0
Genetics: /usr/local/lib/libopencv_text.so.3.3.0
Genetics: /usr/local/lib/libopencv_dnn.so.3.3.0
Genetics: /usr/local/lib/libopencv_features2d.so.3.3.0
Genetics: /usr/local/lib/libopencv_flann.so.3.3.0
Genetics: /usr/local/lib/libopencv_highgui.so.3.3.0
Genetics: /usr/local/lib/libopencv_ml.so.3.3.0
Genetics: /usr/local/lib/libopencv_videoio.so.3.3.0
Genetics: /usr/local/lib/libopencv_imgcodecs.so.3.3.0
Genetics: /usr/local/lib/libopencv_objdetect.so.3.3.0
Genetics: /usr/local/lib/libopencv_imgproc.so.3.3.0
Genetics: /usr/local/lib/libopencv_core.so.3.3.0
Genetics: CMakeFiles/Genetics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gerald/CLionProjects/Genetics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Genetics"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Genetics.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Genetics.dir/build: Genetics

.PHONY : CMakeFiles/Genetics.dir/build

CMakeFiles/Genetics.dir/requires: CMakeFiles/Genetics.dir/main.cpp.o.requires
CMakeFiles/Genetics.dir/requires: CMakeFiles/Genetics.dir/Ventana.cpp.o.requires
CMakeFiles/Genetics.dir/requires: CMakeFiles/Genetics.dir/data.cpp.o.requires

.PHONY : CMakeFiles/Genetics.dir/requires

CMakeFiles/Genetics.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Genetics.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Genetics.dir/clean

CMakeFiles/Genetics.dir/depend:
	cd /home/gerald/CLionProjects/Genetics/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gerald/CLionProjects/Genetics /home/gerald/CLionProjects/Genetics /home/gerald/CLionProjects/Genetics/cmake-build-debug /home/gerald/CLionProjects/Genetics/cmake-build-debug /home/gerald/CLionProjects/Genetics/cmake-build-debug/CMakeFiles/Genetics.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Genetics.dir/depend

