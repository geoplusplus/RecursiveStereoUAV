// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_POSE_ROS_TO_AIRSIM_H_
#define FLATBUFFERS_GENERATED_POSE_ROS_TO_AIRSIM_H_

#include "flatbuffers/flatbuffers.h"

#include "Point_generated.h"
#include "Quaternion_generated.h"

namespace ros_to_airsim {

struct Pose;

MANUALLY_ALIGNED_STRUCT(8) Pose FLATBUFFERS_FINAL_CLASS {
 private:
  Point position_;
  Quaternion orientation_;

 public:
  Pose() {
    memset(this, 0, sizeof(Pose));
  }
  Pose(const Point &_position, const Quaternion &_orientation)
      : position_(_position),
        orientation_(_orientation) {
  }
  const Point &position() const {
    return position_;
  }
  const Quaternion &orientation() const {
    return orientation_;
  }
};
STRUCT_END(Pose, 56);

}  // namespace ros_to_airsim

#endif  // FLATBUFFERS_GENERATED_POSE_ROS_TO_AIRSIM_H_
