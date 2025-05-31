#pragma once

#include <Eigen/Eigen>
#include <ros/ros.h>
#include <geometry_msgs/Point.h>
#include <bspline/NextPosAndYaw.h>  


namespace controller_manager{

class TopicManager {
public:
  TopicManager();
  ~TopicManager();
  
  void init(ros::NodeHandle& nh);
  // EIGEN_MAKE_ALIGNED_OPERATOR_NEW

  private:
    /* Library instances */
    // shared_ptr<BasePlanner> base_planner_;
    // shared_ptr<BaseController> base_controller_;
    // shared_ptr<BaseGovernor> base_governor_;
    
    /* ROS utils */
    ros::Subscriber next_pos_and_yaw_sub_;
    // ros::Subscriber odom_sub_;
    // ros::Publisher control_cmd_pub_;

    /* ROS functions */
    void nextPosAndYawCallback(const bspline::NextPosAndYaw::ConstPtr& msg);
   
    double control_freq_;

};

}