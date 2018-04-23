#include "ros/ros.h"
#include <turtlesim/Pose.h>
#include <geometry_msgs/Twist.h>
#include "std_msgs/Float32.h"

/**
 * The node reads values from an sonar connected to an Arduino.
 * 
 * Once those values are read, they are used to compute to speed values that will be sent to Turtlesim node.
 *  
 * This code is based on the tutorials at wiki.ros.org
 * 
 * Ana Cruz Martín, 2016
 */

std_msgs::Float32 sonarCallbackReading;	
using namespace std;


void getNextLine(geometry_msgs::Twist &velocity)
{
    velocity.linear.x = 2.0;
    velocity.linear.y = 0.0;
    velocity.linear.z = 0.0;
    velocity.angular.x = 0.0;
    velocity.angular.y = 0.0;
    velocity.angular.z = 0.0;
    //ROS_INFO("Sonar Reading:%f\n",sonarReading.data);
    //sonarCallbackReading.data = sonarReading.data;
}


int main(int argc, char **argv)
{
  /**
   * ros::init()
   * 
   * Initialization
   *
   */
  ros::init(argc, argv, "arduino_read_sonar"); 

  /**
   * NodeHandle is the main access point to communications with the ROS system.
   * The first NodeHandle constructed will fully initialize this node, and the last
   * NodeHandle destructed will close down the node.
   */
  ros::NodeHandle n;

  /**
   * Topics: advertising and subscribing
   */
  
  ros::Publisher v_pub = n.advertise<geometry_msgs::Twist>("turtle1/cmd_vel",1000);
  ros::Rate loop_rate(10);

  ros::Subscriber p_sub = n.subscribe("sonar_topic",1000,getSonarCallback);

  
  ROS_INFO("Entering main loop\n");
  while (ros::ok())
  {   
    geometry_msgs::Twist miVel;

    getNextLine(miVel);
   
    v_pub.publish(miVel);

    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}
