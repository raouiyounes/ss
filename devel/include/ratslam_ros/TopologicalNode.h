// Generated by gencpp from file ratslam_ros/TopologicalNode.msg
// DO NOT EDIT!


#ifndef RATSLAM_ROS_MESSAGE_TOPOLOGICALNODE_H
#define RATSLAM_ROS_MESSAGE_TOPOLOGICALNODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace ratslam_ros
{
template <class ContainerAllocator>
struct TopologicalNode_
{
  typedef TopologicalNode_<ContainerAllocator> Type;

  TopologicalNode_()
    : id(0)
    , pose()  {
    }
  TopologicalNode_(const ContainerAllocator& _alloc)
    : id(0)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;




  typedef boost::shared_ptr< ::ratslam_ros::TopologicalNode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ratslam_ros::TopologicalNode_<ContainerAllocator> const> ConstPtr;

}; // struct TopologicalNode_

typedef ::ratslam_ros::TopologicalNode_<std::allocator<void> > TopologicalNode;

typedef boost::shared_ptr< ::ratslam_ros::TopologicalNode > TopologicalNodePtr;
typedef boost::shared_ptr< ::ratslam_ros::TopologicalNode const> TopologicalNodeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ratslam_ros::TopologicalNode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ratslam_ros::TopologicalNode_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ratslam_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'ratslam_ros': ['/home/younes/git_tt/ratrobot/src/ratslam_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ratslam_ros::TopologicalNode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ratslam_ros::TopologicalNode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ratslam_ros::TopologicalNode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ratslam_ros::TopologicalNode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ratslam_ros::TopologicalNode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ratslam_ros::TopologicalNode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ratslam_ros::TopologicalNode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9ad7ea65113411e05ab5cf09fc962a2d";
  }

  static const char* value(const ::ratslam_ros::TopologicalNode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9ad7ea65113411e0ULL;
  static const uint64_t static_value2 = 0x5ab5cf09fc962a2dULL;
};

template<class ContainerAllocator>
struct DataType< ::ratslam_ros::TopologicalNode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ratslam_ros/TopologicalNode";
  }

  static const char* value(const ::ratslam_ros::TopologicalNode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ratslam_ros::TopologicalNode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 id\n\
geometry_msgs/Pose pose\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::ratslam_ros::TopologicalNode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ratslam_ros::TopologicalNode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TopologicalNode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ratslam_ros::TopologicalNode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ratslam_ros::TopologicalNode_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RATSLAM_ROS_MESSAGE_TOPOLOGICALNODE_H
