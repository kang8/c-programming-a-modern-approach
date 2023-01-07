/**
 * Using the array of Exercise 8(./Ex_8_08.c), write a program fragment that
 * computes the average temperature for a month(averaged over all days of the
 * month and all hours of the day).
 *
 * ---
 *
 * float temperature_readings[30][24] = {0.0f};
 * float month_temperature_summary = 0.0f, average_temperature = 0.0f;
 *
 * for(int month = 0; month < 30; month++) {
 *   for (int hour = 0; hour < 24; hour++) {
 *     month_temperature_summary += temperature_readings[month][hour];
 *   }
 * }
 *
 * average_temperature = month_temperature_summary / (30 * 24);
 */
