# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target amr_fleet_msgs::amr_fleet_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${amr_fleet_msgs_TARGETS}.
if(amr_fleet_msgs_TARGETS AND NOT TARGET amr_fleet_msgs::amr_fleet_msgs)
  add_library(amr_fleet_msgs::amr_fleet_msgs INTERFACE IMPORTED)
  set_target_properties(amr_fleet_msgs::amr_fleet_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${amr_fleet_msgs_TARGETS}")
endif()
