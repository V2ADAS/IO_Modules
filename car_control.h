#ifndef CAR_CONTROL_H
#define CAR_CONTROL_H

/**
 * @brief Abstract class representing car control.
 */
typedef struct {
    /**
     * @brief Sets motor speed for movement.
     *
     * @param speed The speed value.
     * @param isForward Flag indicating the direction (1 for forward, 0 for backward).
     */
    void (*setMotorSpeed)(double speed, int isForward);

    /**
     * @brief Forces the brakes.
     */
    void (*forceBrakes)();

    /**
     * @brief Rotates the wheels by a specified angle.
     *
     * @param angle The angle of rotation.
     */
    void (*rotateWheels)(double angle);

    /**
     * @brief Sets the brakes indicator level.
     *
     * @param level The level of the brakes indicator.
     */
    void (*setBrakesIndicator)(double level);

    /**
     * @brief Unsets the brakes indicator.
     */
    void (*unsetBrakesIndicator)();

    /**
     * @brief Sets the slot found indicator.
     */
    void (*setSlotFoundIndicator)();

    /**
     * @brief Unsets the slot found indicator.
     */
    void (*unsetSlotFoundIndicator)();
} CarControl;

#endif // CAR_CONTROL_H
