#include "ros/ros.h"
#include <turtlesim/Pose.h>
#include <geometry_msgs/Twist.h>
#include "std_msgs/Float32.h"
#include <fstream>
#include <string>

/**
 * The node reads values from an sonar connected to an Arduino.
 * 
 * Once those values are read, they are used to compute to speed values that will be sent to Turtlesim node.
 *  
 * This code is based on the tutorials at wiki.ros.org
 * 
 * Ana Cruz Martín, 2016
 */

using namespace std;

  std::ifstream file("/home/viki/catkin_ws/src/practica4/src/velocity.txt");

/*
size_t split(const std::string &txt, std::vector<float> &strs, char ch)
{
    size_t pos = txt.find( ch );
    size_t initialPos = 0;

    // Decompose statement
    while( pos != std::string::npos ) {
	float velocity = strtof((txt.substr( initialPos, pos - initialPos ).c_str()),];
        strs.push_back( velocity );
        initialPos = pos + 1;

        pos = txt.find( ch, initialPos );
    }

    // Add the last one
    float last_velocity = strtof((txt.substr( initialPos, std::min( pos, txt.size() ) - initialPos + 1 ).c_str()),];
    strs.push_back( last_velocity );

    return strs.size();
}
*/

void split(const std::string &line, float values[]){
    std::istringstream istr(line);
    for(int i =0; i<6; i++){
	float velocity = 0;
	istr >> velocity;
	values[i] = velocity;
    }
}

void getNextLine(std::string &rawVelocity)
{
    std::getline(file, rawVelocity);
    ROS_INFO("New line: %s\n",rawVelocity.c_str());
    std::vector<float> velocityValues;
    //split(rawVelocity, velocityValues, ' ');

    
    //ROS_INFO("Sonar Reading:%f\n",sonarReading.data);
    //sonarCallbackReading.data = sonarReading.data;
}

void getNextVelocity(geometry_msgs::Twist &velocity) {
    std::string rawVelocity; 
    getNextLine(rawVelocity);
    float velocityValues[] = {0, 0, 0, 0, 0, 0};
    split(rawVelocity, velocityValues); 
	ROS_INFO("velocityValues: %f %f %f %f %f %f\n",velocityValues[0],velocityValues[1],velocityValues[2],velocityValues[3],velocityValues[4],velocityValues[5]);
    velocity.linear.x = velocityValues[0];
    velocity.linear.y = velocityValues[1];
    velocity.linear.z = velocityValues[2];
    velocity.angular.x = velocityValues[3];
    velocity.angular.y = velocityValues[4];
    velocity.angular.z = velocityValues[5];
}

void printCurrentPos(const turtlesim::Pose &pose)
{
    ROS_INFO("Pose:(%f , %f, %f)\n",pose.x, pose.y, pose.theta);
}


int main(int argc, char **argv)
{
  /**
   * ros::init()
   * 
   * Initialization
   *
   */
  ros::init(argc, argv, "practica4"); 

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
  ros::Rate loop_rate(1);

  ros::Subscriber p_sub = n.subscribe("turtle1/pose",1000,printCurrentPos);
  
  ROS_INFO("Entering main loop\n");
  while (ros::ok())
  {   
    geometry_msgs::Twist miVel;

    getNextVelocity(miVel);
   
    v_pub.publish(miVel);

    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}
