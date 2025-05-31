#include <ros/ros.h>
#include <visualization_msgs/Marker.h>

#include <plan_manage/kino_replan_fsm.h>
#include <plan_manage/topo_replan_fsm.h>
#include <plan_manage/local_explore_fsm.h>
#include <iostream>

#include <plan_manage/backward.hpp>
namespace backward {
backward::SignalHandling sh;
}

using namespace fast_planner;

int main(int argc, char** argv) {

ros::init(argc, argv, "fast_planner_node");

  // Set log level for this node (DEBUG, INFO, WARN, ERROR, FATAL)
if (ros::console::set_logger_level(ROSCONSOLE_DEFAULT_NAME, ros::console::levels::Info)) 
{
  ros::console::notifyLoggerLevelsChanged();  // Force refresh
}

ROS_DEBUG("***********I am ROS_DEBUG test in fast_planner_node************");
ROS_INFO("***********I am ROS_INFO test in fast_planner_node************");
ROS_WARN("***********I am ROS_WARN test in fast_planner_node************");
ROS_ERROR("***********I am ROS_ERROR test in fast_planner_node************");
ROS_FATAL("***********I am ROS_FATAL test in fast_planner_node************");

  ros::NodeHandle nh("~");

  int planner;
  nh.param("planner_node/planner", planner, -1);

  TopoReplanFSM topo_replan;
  KinoReplanFSM kino_replan;
  LocalExploreFSM local_explore;

  if (planner == 1) {
    kino_replan.init(nh);
  } else if (planner == 2) {
    topo_replan.init(nh);
  } else if (planner == 3) {
    local_explore.init(nh);
  }

  ros::Duration(1.0).sleep();
  ros::spin();

  return 0;
}
