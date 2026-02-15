
/**************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright.
 ***************************/
/**
 * @file stats.h
 * @brief Header file for stats.c containing function declarations
 *
 * This file declares functions used for statistical analysis of an
 * unsigned char array.
 *
 * @author Marcos Sgorla
 * @date February 2026
 *
 */

#ifndef _STATS_H_
#define _STATS_H_

/**
 * @brief Prints the statistics of the array
 *
 * Displays the minimum, maximum, mean, and median values.
 *
 * @param data Pointer to the data array
 * @param length Size of the array
 */
void print_statistics(unsigned char *data, unsigned int length);

/**
 * @brief Prints the array elements
 *
 * Displays all elements of the array with their indices.
 *
 * @param data Pointer to the data array
 * @param length Size of the array
 */
void print_array(unsigned char *data, unsigned int length);

/**
 * @brief Finds the median of the array
 *
 * The array must be sorted before calling this function.
 *
 * @param data Pointer to sorted data array
 * @param length Size of the array
 *
 * @return Median value
 */
unsigned char find_median(unsigned char *data, unsigned int length);

/**
 * @brief Calculates the mean of the array
 *
 * @param data Pointer to data array
 * @param length Size of the array
 *
 * @return Mean value
 */
unsigned char find_mean(unsigned char *data, unsigned int length);

/**
 * @brief Finds the maximum value in the array
 *
 * @param data Pointer to data array
 * @param length Size of the array
 *
 * @return Maximum value
 */
unsigned char find_maximum(unsigned char *data, unsigned int length);

/**
 * @brief Finds the minimum value in the array
 *
 * @param data Pointer to data array
 * @param length Size of the array
 *
 * @return Minimum value
 */
unsigned char find_minimum(unsigned char *data, unsigned int length);

/**
 * @brief Sorts the array from largest to smallest
 *
 * After sorting, index 0 contains the largest value.
 *
 * @param data Pointer to data array
 * @param length Size of the array
 */
void sort_array(unsigned char *data, unsigned int length);

#endif /* _STATS_H_ */
