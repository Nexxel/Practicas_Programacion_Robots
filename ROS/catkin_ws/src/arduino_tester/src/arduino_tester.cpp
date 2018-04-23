#include "ros/ros.h"
#include <turtlesim/Pose.h>
#include <geometry_msgs/Twist.h>
#include "std_msgs/UInt16.h"

#include <sstream>	/* Librerías para leer de fichero */
#include <iostream>	
#include <fstream>
#include <string>

std_msgs::UInt16 fsrCallbackReading;	/* Mensaje con los comandos de velocidad */
using namespace std;


/**
 * The node reads values from an FSR sensor connected to an Arduino.
 * 
 * Once those values are read, they are used to compute to new values:
 *   - a speed value that will be sent to Turtlesim node.
 *   - a motor command that will be sent to a servo motor connected to the Arduino.
 *
 * This code is based on the tutorials at wiki.ros.org
 * 
 * Ana Cruz Martín, 2015
 */


void getFsrCallback(const std_msgs::UInt16 &fsrReading)
{
  ROS_INFO("FSR Reading:%u\n",fsrReading.data);
  fsrCallbackReading.data = fsrReading.data;
}


int main(int argc, char **argv)
{
  /**
   * ros::init()
   * 
   * Initialization
   *
   */
  ros::init(argc, argv, "arduino_tester"); 

  /**
   * NodeHandle is the main access point to communications with the ROS system.
   * The first NodeHandle constructed will fully initialize this node, and the last
   * NodeHandle destructed will close down the node.
   */
  ros::NodeHandle n;

  /**
   * Topics: advertising and subscribing
   */
  
  /*ros::Publisher v_pub = n.advertise<geometry_msgs::Twist>("turtle1/cmd_vel",1000);
  ros::Rate loop_rate(10);*/

  ros::Publisher v_pub = n.advertise<geometry_msgs::Twist>("turtle1/cmd_vel",1000);
  ros::Rate loop_rate(10);

  ros::Subscriber p_sub = n.subscribe("fsr_topic",1000,getFsrCallback);

  
  ROS_INFO("Entering main loop\n");
  while (ros::ok())
  {   
    geometry_msgs::Twist miVel;

    miVel.linear.x = 0.0;
    miVel.linear.y = 0.0;
    miVel.linear.z = 0.0;
    miVel.angular.x = 0.0;
    miVel.angular.y = 0.0;
    miVel.angular.z = 0.0;
    //ROS_INFO("FSR Reading out:%u\n",fsrCallbackReading.data);
    if (fsrCallbackReading.data < 250)
    {
    	miVel.linear.x = 1.0;
        miVel.angular.z = 0.8;
    }
    else if ((fsrCallbackReading.data >= 250) && (fsrCallbackReading.data < 500))
    {
   	 miVel.linear.x = 2.0;
         miVel.angular.z = 1.8;
    }
    else if ((fsrCallbackReading.data >= 500) && (fsrCallbackReading.data < 750))
    {
   	 miVel.linear.x = 3.0;
         miVel.angular.z = 2.8;
    }
    else
    {
	 miVel.linear.x = 4.0;
         miVel.angular.z = 3.8;
    }
    v_pub.publish(miVel);

    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}
