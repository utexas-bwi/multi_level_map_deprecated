# http://ros.org/doc/groovy/api/catkin/html/user_guide/supposed.html
cmake_minimum_required(VERSION 2.8.3)
project(multi_level_map_utils)
find_package(catkin REQUIRED)
find_package(Boost REQUIRED)

#common commands for building c++ executables and libraries
#add_library(${PROJECT_NAME} src/example.cpp)
#target_link_libraries(${PROJECT_NAME} another_library)
#
# CATKIN_MIGRATION: removed during catkin migration
# rosbuild_add_boost_directories()
#find_package(Boost REQUIRED COMPONENTS thread)
#include_directories(${Boost_INCLUDE_DIRS})
#target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
#add_executable(example examples/example.cpp)
#target_link_libraries(example ${PROJECT_NAME})

include_directories(include)
catkin_python_setup()

# what other packages will need to use this one
catkin_package(
    INCLUDE_DIRS include
    LIBRARIES multi_level_map_utils
)

add_library(multi_level_map_utils src/utils.cpp)

# C++ headers and libraries to install
# (Python install uses setup.py)
install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
)
install(
  TARGETS multi_level_map_utils
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
)
