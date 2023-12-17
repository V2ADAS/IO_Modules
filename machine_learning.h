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
 * @brief Abstract class representing a machine learning layer.
 */
typedef struct {
    /**
     * @brief Enables lane detection with a specified interval.
     * 
     * @param msInterval The minimum detection interval in milliseconds.
     */
    void (*enableLaneDetection)(int msInterval);

    /**
     * @brief Disables lane detection.
     */
    void (*disableLaneDetection)();

    /**
     * @brief Handles the current lane position.
     * 
     * @param currentLanePosition The current lane position data.
     */
    void (*handleLanePosition)(LanePosition currentLanePosition);

    /**
     * @brief Enables slot search mode.
     */
    void (*enableSlotSearchMode)();

    /**
     * @brief Disables slot search mode.
     */
    void (*disableSlotSearchMode)();

    /**
     * @brief Handles the found slot.
     * 
     * @param foundSlot The found slot data.
     */
    void (*onSlotFound)(Slot foundSlot);

    /**
     * @brief Enables collision threat detection.
     */
    void (*enableCollisionThreat)();

    /**
     * @brief Disables collision threat detection.
     */
    void (*disableCollisionThreat)();

    /**
     * @brief Handles the current collision threat.
     * 
     * @param currentCollisionThreat The current collision threat level.
     */
    void (*handleCollisionThreat)(CollisionThreat currentCollisionThreat);
} MLLayer;

#endif /* ML_LAYER_H */
