#ifndef WARNING_ALERT_H
#define WARNING_ALERT_H

/**
 * @brief Structure representing a warning alert system.
 */
typedef struct {
    double* nearestPoint; /**< Pointer to the global variable representing the nearest point. */
    int* collisionAvoidanceFlag; /**< Pointer to the collision avoidance flag. */
    /**
     * @brief Gives an alert.
     */
    void (*giveAlert)();
} WarningAlertSystem;

/**
 * @brief Initializes the warning alert system.
 *
 * @param system Pointer to the WarningAlertSystem structure.
 * @param nearestPoint Pointer to the global variable representing the nearest point.
 * @param collisionAvoidanceFlag Pointer to the collision avoidance flag.
 * @param giveAlertFunction Function pointer to the function that gives an alert.
 */
void initWarningAlertSystem(WarningAlertSystem* system, double* nearestPoint, int* collisionAvoidanceFlag, void (*giveAlertFunction)());

/**
 * @brief Checks for the warning area and triggers an alert if necessary.
 *
 * @param system Pointer to the WarningAlertSystem structure.
 */
void checkWarningArea(const WarningAlertSystem* system);

#endif // WARNING_ALERT_H
