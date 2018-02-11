#ifndef ROBOJACKETS_3D_TRAJECTORY_GRIDSTATESPACE_H
#define ROBOJACKETS_3D_TRAJECTORY_GRIDSTATESPACE_H

#include <Eigen/Dense>
#include "3dspace/obstacle_grid.h"
#include "3dspace/space_state_space.h"

namespace RRT {

/**
 * @brief A 3d space with continuous states and discretized obstacles.
 * @details The state space is broken up into a grid with the given discrete
 * height and widths and depths.
 */
class GridStateSpace
    : public SpaceStateSpace
{
public:
    GridStateSpace(double width, double height, double depth, int discretizedWidth,
                   int discretizedHeight, int discretizedDepth);

    /// @brief Returns a boolean indicating whether the given point is within bounds and obstacle-free.
    bool stateValid(const Eigen::Vector3d& pt) const;
    bool transitionValid(const Eigen::Vector3d& from,
                         const Eigen::Vector3d& to) const;

    Eigen::Vector3d intermediateState(const Eigen::Vector3d& source,
                                      const Eigen::Vector3d& target,
                                      double minStepSize,
                                      double maxStepSize) const;

    const ObstacleGrid& obstacleGrid() const;
    ObstacleGrid& obstacleGrid();

private:
    ObstacleGrid _obstacleGrid;
};

}  // namespace RRT

#endif // ROBOJACKETS_3D_TRAJECTORY_GRIDSTATESPACE_H