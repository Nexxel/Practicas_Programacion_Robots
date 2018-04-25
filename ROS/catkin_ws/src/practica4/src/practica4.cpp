#include "ros/ros.h"
#include <turtlesim/Pose.h>
#include <geometry_msgs/Twist.h>
#include "std_msgs/Float32.h"
#include <fstream>
#include <string>

using namespace std;

std::ifstream file("/home/viki/catkin_ws/src/practica4/src/velocity.txt");


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
    std::vector<float> velocityValues;
}

void getNextVelocity(geometry_msgs::Twist &velocity) {
    std::string rawVelocity; 
    getNextLine(rawVelocity);
    float velocityValues[] = {0, 0, 0, 0, 0, 0};
    split(rawVelocity, velocityValues); 
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
  ros::init(argc, argv, "practica4"); 
  ros::NodeHandle n;
 
  ros::Publisher v_pub = n.advertise<geometry_msgs::Twist>("turtle1/cmd_vel",1000);
  ros::Subscriber p_sub = n.subscribe("turtle1/pose",1000,printCurrentPos);

  
  ros::Rate loop_rate(1);  
  ROS_INFO("Entering main loop\n");
  while (ros::ok())
  {   
    geometry_msgs::Twist myVelocity;

    getNextVelocity(myVelocity);
   
    v_pub.publish(myVelocity);

    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}
