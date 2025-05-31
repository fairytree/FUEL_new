#include <ros/ros.h>
#include "topic_manager.h"


int main(int argc, char** argv) {

  ros::init(argc, argv, "controller_manager");

  // Set log level for this node (DEBUG, INFO, WARN, ERROR, FATAL)
  if(ros::console::set_logger_level(ROSCONSOLE_DEFAULT_NAME, ros::console::levels::Info)) {
  ros::console::notifyLoggerLevelsChanged();  // Force refresh
  }
  
  ROS_DEBUG("***********I am ROS_DEBUG test in controller_manager************");
  ROS_INFO("***********I am ROS_INFO test in controller_manager************");
  ROS_WARN("***********I am ROS_WARN test in controller_manager************");
  ROS_ERROR("***********I am ROS_ERROR test in controller_manager************");
  ROS_FATAL("***********I am ROS_FATAL test in controller_manager************");

  ros::NodeHandle nh("~");

  controller_manager::TopicManager topic_manager;
  topic_manager.init(nh);

  ros::Duration(1.0).sleep();
  ros::spin();

  return 0;
}