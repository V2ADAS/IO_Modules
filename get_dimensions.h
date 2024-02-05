#ifndef GET_DIMENSIONS_H
#define GET_DIMENSIONS_H

/**
 * @brief Structure representing a 2D point.
 */
typedef struct {
    double x; /**< The x-coordinate of the point. */
    double y; /**< The y-coordinate of the point. */
} Point2D;

/**
 * @brief Structure representing dimensions calculated from ultrasonic sensor data.
 */
typedef struct {
    Point2D* points; /**< Array of (x, y) points. */
    int numPoints; /**< Number of points in the array. */
} Dimensions;

/**
 * @brief Function to process ultrasonic sensor data and get dimensions.
 *
 * @param ultrasonicData Array containing ultrasonic sensor readings.
 * @param numReadings Number of readings in the ultrasonicData array.
 * @return Dimensions structure with calculated (x, y) points.
 */
Dimensions getDimensions(const double* ultrasonicData, int numReadings);

#endif // GET_DIMENSIONS_H
