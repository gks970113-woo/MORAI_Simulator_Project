// Generated by gencpp from file map_loader/student.msg
// DO NOT EDIT!


#ifndef MAP_LOADER_MESSAGE_STUDENT_H
#define MAP_LOADER_MESSAGE_STUDENT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace map_loader
{
template <class ContainerAllocator>
struct student_
{
  typedef student_<ContainerAllocator> Type;

  student_()
    : first_name()
    , last_name()
    , age(0)
    , score(0)  {
    }
  student_(const ContainerAllocator& _alloc)
    : first_name(_alloc)
    , last_name(_alloc)
    , age(0)
    , score(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _first_name_type;
  _first_name_type first_name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _last_name_type;
  _last_name_type last_name;

   typedef uint8_t _age_type;
  _age_type age;

   typedef uint32_t _score_type;
  _score_type score;





  typedef boost::shared_ptr< ::map_loader::student_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_loader::student_<ContainerAllocator> const> ConstPtr;

}; // struct student_

typedef ::map_loader::student_<std::allocator<void> > student;

typedef boost::shared_ptr< ::map_loader::student > studentPtr;
typedef boost::shared_ptr< ::map_loader::student const> studentConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_loader::student_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_loader::student_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::map_loader::student_<ContainerAllocator1> & lhs, const ::map_loader::student_<ContainerAllocator2> & rhs)
{
  return lhs.first_name == rhs.first_name &&
    lhs.last_name == rhs.last_name &&
    lhs.age == rhs.age &&
    lhs.score == rhs.score;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::map_loader::student_<ContainerAllocator1> & lhs, const ::map_loader::student_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace map_loader

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::map_loader::student_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_loader::student_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_loader::student_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_loader::student_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_loader::student_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_loader::student_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_loader::student_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f8bfa80ae3c7a93455596d9622ad33a9";
  }

  static const char* value(const ::map_loader::student_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf8bfa80ae3c7a934ULL;
  static const uint64_t static_value2 = 0x55596d9622ad33a9ULL;
};

template<class ContainerAllocator>
struct DataType< ::map_loader::student_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_loader/student";
  }

  static const char* value(const ::map_loader::student_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_loader::student_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string first_name\n"
"string last_name\n"
"uint8 age\n"
"uint32 score\n"
;
  }

  static const char* value(const ::map_loader::student_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_loader::student_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.first_name);
      stream.next(m.last_name);
      stream.next(m.age);
      stream.next(m.score);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct student_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_loader::student_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_loader::student_<ContainerAllocator>& v)
  {
    s << indent << "first_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.first_name);
    s << indent << "last_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.last_name);
    s << indent << "age: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.age);
    s << indent << "score: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.score);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_LOADER_MESSAGE_STUDENT_H
