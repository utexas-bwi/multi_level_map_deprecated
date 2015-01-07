cmake_minimum_required(VERSION 2.8.3)

project(multi_level_map_utils)

find_package(catkin REQUIRED)
find_package(Boost REQUIRED)

catkin_python_setup()

# what other packages will need to use this one
catkin_package(
    INCLUDE_DIRS include
    LIBRARIES multi_level_map_utils
)

include_directories(include)

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

catkin_install_python(
  PROGRAMS nodes/level_mux
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
