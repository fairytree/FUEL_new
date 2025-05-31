#include <ros/ros.h>
#include <exploration_manager/fast_exploration_fsm.h>

#include <plan_manage/backward.hpp>
namespace backward {
backward::SignalHandling sh;
}

using namespace fast_planner;

int main(int argc, char** argv) {

  ros::init(argc, argv, "exploration_node");

  // Set log level for this node (DEBUG, INFO, WARN, ERROR, FATAL)
  if(ros::console::set_logger_level(ROSCONSOLE_DEFAULT_NAME, ros::console::levels::Info)) {
  ros::console::notifyLoggerLevelsChanged();  // Force refresh
  }
  
  ROS_INFO("***********I am ROS_INFO test in exploration_node************");

  ros::NodeHandle nh("~");

  FastExplorationFSM expl_fsm;
  expl_fsm.init(nh);

  ros::Duration(1.0).sleep();
  ros::spin();

  return 0;
}
