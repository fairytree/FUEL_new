
#include "topic_manager.h"
#include <iostream>

namespace controller_manager {

  TopicManager::TopicManager(){
  }
  TopicManager::~TopicManager(){
  }
    
  void TopicManager::init(ros::NodeHandle& nh) {
    /*  param  */
    nh.param("controller_manager/control_freq", control_freq_, -1.0);

    /* Ros sub, pub and timer */
    next_pos_and_yaw_sub_ = nh.subscribe("/planning/next_pos_and_yaw", 1, &TopicManager::nextPosAndYawCallback, this);
  }

  //!!!
  void TopicManager::nextPosAndYawCallback(const bspline::NextPosAndYaw::ConstPtr& msg) {
    
      ROS_INFO("nextPosAndYawCallback received message:");
      ROS_INFO("Position: (%f, %f, %f)", msg->position.x, msg->position.y, msg->position.z);
      ROS_INFO("Yaw: %f", msg->yaw);

  }

}
