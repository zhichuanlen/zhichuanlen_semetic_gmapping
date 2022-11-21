cmake_minimum_required(VERSION 3.0.2)
project(zhichuanlen_semetic_gmapping)

SET(CMAKE_BUILD_TYPE "Debug")
find_package(catkin REQUIRED COMPONENTS
  nav_msgs
  roscpp
  sensor_msgs
  std_msgs
  tf
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES zhichuanlen_semetic_gmapping
#  CATKIN_DEPENDS nav_msgs roscpp sensor_msgs std_msgs tf
#  DEPENDS system_lib
)


include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(zhichuanlen_semetic_gmapping src/part_ros/main.cpp
                                src/part_ros/zhichuanlen_semetic_gmapping.cpp
                                src/part_data/lidar_undistortion/lidar_undistortion.cpp
                                src/part_slam/gridfastslam/gridslamprocessor.cpp
                                src/part_slam/sensor_range/rangereading.cpp
                                src/part_slam/motionmodel/motionmodel.cpp
                                src/part_slam/scanmatcher/scanmatcher.cpp
                                )


target_link_libraries(zhichuanlen_semetic_gmapping ${catkin_LIBRARIES})
