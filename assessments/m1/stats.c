/**************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright.
 ***************************/
/**
 * @file stats.c
 * @brief Performs statistical analysis on an array of unsigned char data
 *
 * This file contains functions that compute statistics such as minimum,
 * maximum, mean, and median. It also includes functions to sort and print
 * the data array.
 *
 * @author Marcos Sgorla
 * @date February 2026
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* Function Definitions */

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_array(test, SIZE);
  print_statistics(test, SIZE);
}

void print_statistics(unsigned char *data, unsigned int length) {

  unsigned char min = find_minimum(data, length);
  unsigned char max = find_maximum(data, length);
  unsigned char mean = find_mean(data, length);

  sort_array(data, length);
  unsigned char median = find_median(data, length);

  printf("\nStatistics:\n");
  printf("Minimum: %d\n", min);
  printf("Maximum: %d\n", max);
  printf("Mean: %d\n", mean);
  printf("Median: %d\n", median);
}

void print_array(unsigned char *data, unsigned int length) {
  printf("Array Elements:\n");
  for(unsigned int i = 0; i < length; i++) {
    printf("Index %d: %d\n", i, data[i]);
  }
}

unsigned char find_median(unsigned char *data, unsigned int length) {

  if(length % 2 == 0) {
    return (data[length/2 - 1] + data[length/2]) / 2;
  } else {
    return data[length/2];
  }
}

unsigned char find_mean(unsigned char *data, unsigned int length) {

  unsigned int sum = 0;

  for(unsigned int i = 0; i < length; i++) {
    sum += data[i];
  }

  return (unsigned char)(sum / length);
}

unsigned char find_maximum(unsigned char *data, unsigned int length) {

  unsigned char max = data[0];

  for(unsigned int i = 1; i < length; i++) {
    if(data[i] > max) {
      max = data[i];
    }
  }

  return max;
}

unsigned char find_minimum(unsigned char *data, unsigned int length) {

  unsigned char min = data[0];

  for(unsigned int i = 1; i < length; i++) {
    if(data[i] < min) {
      min = data[i];
    }
  }

  return min;
}

void sort_array(unsigned char *data, unsigned int length) {

  for(unsigned int i = 0; i < length - 1; i++) {
    for(unsigned int j = i + 1; j < length; j++) {
      if(data[i] < data[j]) {
        unsigned char temp = data[i];
        data[i] = data[j];
        data[j] = temp;
      }
    }
  }
}
