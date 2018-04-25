/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by gensrv_cpp from file /home/viki/catkin_ws/src/arbotix_ros/arbotix_msgs/srv/SetSpeed.srv
 *
 */


#ifndef ARBOTIX_MSGS_MESSAGE_SETSPEED_H
#define ARBOTIX_MSGS_MESSAGE_SETSPEED_H

#include <ros/service_traits.h>


#include <arbotix_msgs/SetSpeedRequest.h>
#include <arbotix_msgs/SetSpeedResponse.h>


namespace arbotix_msgs
{

struct SetSpeed
{

typedef SetSpeedRequest Request;
typedef SetSpeedResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetSpeed
} // namespace arbotix_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::arbotix_msgs::SetSpeed > {
  static const char* value()
  {
    return "4641bb0523a3557209606d9bd91ce33a";
  }

  static const char* value(const ::arbotix_msgs::SetSpeed&) { return value(); }
};

template<>
struct DataType< ::arbotix_msgs::SetSpeed > {
  static const char* value()
  {
    return "arbotix_msgs/SetSpeed";
  }

  static const char* value(const ::arbotix_msgs::SetSpeed&) { return value(); }
};


// service_traits::MD5Sum< ::arbotix_msgs::SetSpeedRequest> should match 
// service_traits::MD5Sum< ::arbotix_msgs::SetSpeed > 
template<>
struct MD5Sum< ::arbotix_msgs::SetSpeedRequest>
{
  static const char* value()
  {
    return MD5Sum< ::arbotix_msgs::SetSpeed >::value();
  }
  static const char* value(const ::arbotix_msgs::SetSpeedRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::arbotix_msgs::SetSpeedRequest> should match 
// service_traits::DataType< ::arbotix_msgs::SetSpeed > 
template<>
struct DataType< ::arbotix_msgs::SetSpeedRequest>
{
  static const char* value()
  {
    return DataType< ::arbotix_msgs::SetSpeed >::value();
  }
  static const char* value(const ::arbotix_msgs::SetSpeedRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::arbotix_msgs::SetSpeedResponse> should match 
// service_traits::MD5Sum< ::arbotix_msgs::SetSpeed > 
template<>
struct MD5Sum< ::arbotix_msgs::SetSpeedResponse>
{
  static const char* value()
  {
    return MD5Sum< ::arbotix_msgs::SetSpeed >::value();
  }
  static const char* value(const ::arbotix_msgs::SetSpeedResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::arbotix_msgs::SetSpeedResponse> should match 
// service_traits::DataType< ::arbotix_msgs::SetSpeed > 
template<>
struct DataType< ::arbotix_msgs::SetSpeedResponse>
{
  static const char* value()
  {
    return DataType< ::arbotix_msgs::SetSpeed >::value();
  }
  static const char* value(const ::arbotix_msgs::SetSpeedResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ARBOTIX_MSGS_MESSAGE_SETSPEED_H