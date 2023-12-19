#ifndef ULTRASONIC_FILTER_H
#define ULTRASONIC_FILTER_H

/**
 * @brief Structure representing a filtered reading with a confidence value.
 */
typedef struct {
    double reading; /**< The filtered reading value. */
    double confidence; /**< Confidence level associated with the filtered reading. */
} FilteredReading;

/**
 * @brief The function used for filtering ultrasonic sensor readings.
 *
 * The function takes an array of readings and the number of readings as input and
 * returns a FilteredReading structure containing the filtered reading and confidence.
 *
 * @param readings An array of ultrasonic sensor readings.
 * @param numReadings The number of readings in the array.
 * @return A FilteredReading structure containing the filtered reading and confidence.
 */
FilteredReading FILTER_FilterReadings(double* readings, int numReadings);

// TODO: Add fields for actual filters

#endif // ULTRASONIC_FILTER_H
