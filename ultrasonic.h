#ifndef SENSOR_H
#define SENSOR_H

/**
 * @brief Structure representing a sensor.
 */
typedef struct {
    double reading; /**< The sensor reading. */
    const double offsetX; /**< The X-axis offset of the sensor. */
    const double offsetY; /**< The Y-axis offset of the sensor. */
    int isOn; /**< Flag indicating whether the sensor is on or off (0 for off, 1 for on). */
} Sensor;


/**
* @brief Turns on the ultrasonic sensor.
*
* @param selectedSensors Optional list indicating which sensors to turn on.
*                        If NULL, all sensors are turned on.
* @param length The length of the selectedSensors array.
*/
void ULTRASONIC_TurnOn(const int* selectedSensors, int length);

/**
* @brief Turns off the ultrasonic sensor.
*
* @param selectedSensors Optional list indicating which sensors to turn off.
*                        If NULL, all sensors are turned off.
* @param length The length of the selectedSensors array.
*/
void ULTRASONIC_TurnOff(const int* selectedSensors, int length);

/**
* @brief Updates the readings of the ultrasonic sensor.
*
* @param destination An array to store the updated sensor readings.
* @param length The length of the destination array.
*/
void ULTRASONIC_UpdateReadings(double* destination, int length);

/**
 * @brief Constant representing the number of sensors.
 */
extern const int numSensors;

#endif // SENSOR_H
