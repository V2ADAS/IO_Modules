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
 * @brief Structure representing an ultrasonic sensor.
 */
typedef struct {
    /**
     * @brief Turns on the ultrasonic sensor.
     *
     * @param selectedSensors Optional list indicating which sensors to turn on.
     *                        If NULL, all sensors are turned on.
     * @param length The length of the selectedSensors array.
     */
    void (*turnOn)(const int* selectedSensors, int length);

    /**
     * @brief Turns off the ultrasonic sensor.
     *
     * @param selectedSensors Optional list indicating which sensors to turn off.
     *                        If NULL, all sensors are turned off.
     * @param length The length of the selectedSensors array.
     */
    void (*turnOff)(const int* selectedSensors, int length);

    /**
     * @brief Updates the readings of the ultrasonic sensor.
     *
     * @param destination An array to store the updated sensor readings.
     * @param length The length of the destination array.
     * @param carSpeed The current speed of the car.
     * @param encoderValue The current encoder value of the DC motor.
     */
    void (*updateReadings)(double* destination, int length, double carSpeed, int encoderValue);

    /**
     * @brief Updates the speed of the car.
     *
     * @param speed The new speed of the car.
     */
    void (*updateCarSpeed)(double speed);
} Ultrasonic;

/**
 * @brief Constant representing the number of sensors.
 */
extern const int numSensors;

#endif // SENSOR_H
