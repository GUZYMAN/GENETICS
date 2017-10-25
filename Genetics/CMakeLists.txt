cmake_minimum_required(VERSION 3.8)
project(Genetics)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES main.cpp Ventana.h data.h Ventana.cpp data.cpp)
find_package(OpenCV REQUIRED)

set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})


add_executable(Genetics ${SOURCE_FILES})
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(Genetics ${OpenCV_LIBS})
target_link_libraries(Genetics ${wxWidgets_LIBRARIES})