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
 * @brief Abstract class representing car measurements.
 */
typedef struct {
    /**
     * @brief Enables car measurements.
     */
    void (*enableMeasurements)();

    /**
     * @brief Disables car measurements.
     */
    void (*disableMeasurements)();

    /**
     * @brief Handles wheel rotation readings.
     *
     * @param wheelRotation A structure containing the wheel rotation reading data.
     */
    void (*handleWheelRotation)(WheelRotationReading wheelRotation);

    /**
     * @brief Handles accelerometer readings.
     *
     * @param accelerometerReading A structure containing the accelerometer reading data.
     */
    void (*handleAccelerometerReading)(AccelerometerReading accelerometerReading);

    /**
     * @brief Handles compass readings.
     *
     * @param compassReading A structure containing the compass reading data.
     */
    void (*handleCompassReading)(CompassReading compassReading);

    /**
     * @brief Handles IMU readings.
     *
     * @param imuReading A structure containing the IMU reading data.
     */
    void (*handleImuReading)(IMUReading imuReading);
} CarMeasurements;

#endif // CAR_MEASUREMENTS_H
