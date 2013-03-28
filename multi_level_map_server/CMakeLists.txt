cmake_minimum_required(VERSION 2.8.3)
project(multi_level_map_server)

find_package(catkin REQUIRED COMPONENTS rospy tf nav_msgs multi_level_map_utils multi_level_map_msgs)

catkin_package(
    DEPENDS python-imaging python-yaml
    CATKIN_DEPENDS rospy tf nav_msgs multi_level_map_utils multi_level_map_msgs
)
