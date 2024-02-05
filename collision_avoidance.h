#ifndef COLLISION_AVOIDANCE_H
#define COLLISION_AVOIDANCE_H

/**
 * @brief Function pointer type for forcing the brakes.
 */
typedef void (*ForceBrakesFunction)();

/**
 * @brief Structure representing collision avoidance system.
 */
typedef struct {
    int collisionAvoidanceFlag; /**< Flag indicating if collision avoidance is active. */
    ForceBrakesFunction forceBrakes; /**< Function pointer to force the brakes. */
} CollisionAvoidanceSystem;

/**
 * @brief Initializes the collision avoidance system.
 *
 * @param system Pointer to the CollisionAvoidanceSystem structure.
 * @param forceBrakesFunction Function pointer to the function that forces the brakes.
 */
void initCollisionAvoidanceSystem(CollisionAvoidanceSystem* system, ForceBrakesFunction forceBrakesFunction);

/**
 * @brief Sets the collision avoidance flag.
 *
 * @param system Pointer to the CollisionAvoidanceSystem structure.
 */
void setCollisionAvoidanceFlag(CollisionAvoidanceSystem* system);

/**
 * @brief Clears the collision avoidance flag.
 *
 * @param system Pointer to the CollisionAvoidanceSystem structure.
 */
void clearCollisionAvoidanceFlag(CollisionAvoidanceSystem* system);

/**
 * @brief Checks if collision avoidance is active.
 *
 * @param system Pointer to the CollisionAvoidanceSystem structure.
 * @return 1 if collision avoidance is active, 0 otherwise.
 */
int isCollisionAvoidanceActive(const CollisionAvoidanceSystem* system);

#endif // COLLISION_AVOIDANCE_H
