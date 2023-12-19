#ifndef ML_LAYER_H
#define ML_LAYER_H

/**
 * @brief Enum representing collision threat levels.
 */
typedef enum {
    none, /**< No collision threat. */
    low, /**< Low collision threat. */
    medium, /**< Medium collision threat. */
    high, /**< High collision threat. */
    imminent /**< Imminent collision threat. */
} CollisionThreat;

/**
 * @brief Placeholder for lane position data.
 */
typedef struct {
    // Add any necessary fields for LanePosition data.
} LanePosition;

/**
 * @brief Placeholder for slot data.
 */
typedef struct {
    // Add any necessary fields for Slot data.
} Slot;

/**
* @brief Enables lane detection with a specified interval.
* 
* @param msInterval The minimum detection interval in milliseconds.
*/
void ML_EnableLaneDetection(int msInterval);

/**
* @brief Disables lane detection.
*/
void ML_DisableLaneDetection();

/**
* @brief Handles the current lane position.
* 
* @param currentLanePosition The current lane position data.
*/
void ML_HandleLanePosition(LanePosition currentLanePosition);

/**
* @brief Enables slot search mode.
*/
void ML_EnableSlotSearchMode();

/**
* @brief Disables slot search mode.
*/
void ML_DisableSlotSearchMode();

/**
* @brief Handles the found slot.
* 
* @param foundSlot The found slot data.
*/
void ML_OnSlotFound(Slot foundSlot);

/**
* @brief Enables collision threat detection.
*/
void ML_EnableCollisionThreat();

/**
* @brief Disables collision threat detection.
*/
void ML_DisableCollisionThreat();

/**
* @brief Handles the current collision threat.
* 
* @param currentCollisionThreat The current collision threat level.
*/
void ML_HandleCollisionThreat(CollisionThreat currentCollisionThreat);

#endif /* ML_LAYER_H */
