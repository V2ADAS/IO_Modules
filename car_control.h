#ifndef CAR_CONTROL_H
#define CAR_CONTROL_H


/**
* @brief Sets motor speed for movement.
*
* @param speed The speed value.
* @param isForward Flag indicating the direction (1 for forward, 0 for backward).
*/
void CTRL_SetMotorSpeed(double speed, int isForward);

/**
* @brief Forces the brakes.
*/
void CTRL_ForceBrakes();

/**
* @brief Rotates the wheels by a specified angle.
*
* @param angle The angle of rotation.
*/
void CTRL_RotateWheels(double angle);

/**
* @brief Sets the brakes indicator level.
*
* @param level The level of the brakes indicator.
*/
void CTRL_SetBrakesIndicator(double level);

/**
* @brief Unsets the brakes indicator.
*/
void CTRL_UnsetBrakesIndicator();

/**
* @brief Sets the slot found indicator.
*/
void CTRL_SetSlotFoundIndicator();

/**
* @brief Unsets the slot found indicator.
*/
void CTRL_UnsetSlotFoundIndicator();

#endif // CAR_CONTROL_H
