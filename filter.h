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
 * @brief Function pointer signature for filtering ultrasonic sensor readings.
 *
 * @param readings An array of ultrasonic sensor readings.
 * @param numReadings The number of readings in the array.
 * @return A FilteredReading structure containing the filtered reading and confidence.
 */
typedef FilteredReading (*FilterReadingFunction)(double* readings, int numReadings);

/**
 * @brief Structure representing an ultrasonic filter.
 */
typedef struct {
    /**
     * @brief Function pointer to the method used for filtering ultrasonic sensor readings.
     *
     * The function takes an array of readings and the number of readings as input and
     * returns a FilteredReading structure containing the filtered reading and confidence.
     */
    FilterReadingFunction filterReading;

    // TODO: Add fields for actual filters
} UltrasonicFilter;

#endif // ULTRASONIC_FILTER_H
