#ifndef ISC_ROBOTEQ__ISC_ROBOTEQ_HPP_
#define ISC_ROBOTEQ__ISC_ROBOTEQ_

#include <memory>
#include <rclcpp/rclcpp.hpp>
#include "std_msgs/msg/header.hpp"
#include <geometry_msgs/Twist.h>
#include <string>
#include <math.h>
#include <vector>

namespace Roboteq
{
class Roboteq : public rclcpp::Node
{
public:
  explicit Roboteq(rclcpp::NodeOptions options);

private:
   void driveModeCallback(const geometry_msgs::Twist::ConstPtr msg);
   unsigned char constrainSpeed(double speed);


};
}  // namespace Roboteq

#endif  //ISC_ROBOTEQ__ISC_ROBOTEQ_HPP_
