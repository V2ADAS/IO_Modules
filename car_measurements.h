#ifndef CAR_MEASUREMENTS_H
#define CAR_MEASUREMENTS_H

/**
 * @brief Structure representing wheel rotation readings.
 */
typedef struct {
    double rotationAngle; /**< The rotation angle of the wheel. */
} WheelRotationReading;

/**
 * @brief Placeholder for accelerometer reading data.
 */
typedef struct {
    // Add any necessary fields for accelerometer reading data.
} AccelerometerReading;

/**
 * @brief Placeholder for compass reading data.
 */
typedef struct {
    // Add any necessary fields for compass reading data.
} CompassReading;

/**
 * @brief Placeholder for IMU reading data.
 */
typedef struct {
    // Add any necessary fields for IMU reading data.
} IMUReading;



/**
* @brief Enables car measurements.
*/
void MSRMNTS_EnableMeasurements();

/**
* @brief Disables car measurements.
*/
void MSRMNTS_DisableMeasurements();

/**
* @brief Handles wheel rotation readings.
*
* @param wheelRotation A structure containing the wheel rotation reading data.
*/
void MSRMNTS_HandleWheelRotation(WheelRotationReading wheelRotation);

/**
* @brief Handles accelerometer readings.
*
* @param accelerometerReading A structure containing the accelerometer reading data.
*/
void MSRMNTS_HandleAccelerometerReading(AccelerometerReading accelerometerReading);

/**
* @brief Handles compass readings.
*
* @param compassReading A structure containing the compass reading data.
*/
void MSRMNTS_HandleCompassReading(CompassReading compassReading);

/**
* @brief Handles IMU readings.
*
* @param imuReading A structure containing the IMU reading data.
*/
void MSRMNTS_HandleImuReading(IMUReading imuReading);

#endif // CAR_MEASUREMENTS_H
