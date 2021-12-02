

/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Houssem.file> 
 * @brief <code that performs statistical analytics on a dataset >
 *
 * <Add Extended Description Here>
 *
 * @author <Houssem Mmoslah>
 * @date <24/09/2021 >
 *
 */



#include <stdio.h>
#include "stats.h"
void sort_array(unsigned char test[],int SIZE);
void print_statistics(int median, int mean, int max, int min);
void print_array(unsigned char test[],int SIZE);
int find_maximum(unsigned char test[],int SIZE);
int find_minimum(unsigned char test[],int SIZE);
int find_median(unsigned char sorted_array[],int SIZE);
int find_mean(unsigned char test[],int SIZE);


/* Size of the Data Set */
#define SIZE (40)
void main() {
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
unsigned char sorted_array[SIZE];
  int max = 0, min = 0, median = 0, mean = 0;
  
  printf("Unsorted array \n");
  print_array(test,SIZE);
  sort_array(test,SIZE);
  printf("\nSorted array \n");
  print_array(test,SIZE);
  printf("\n");
  max = find_maximum(test,SIZE);
  min = find_minimum(test,SIZE);
  median  = find_median(test,SIZE);
  mean   = find_mean(test,SIZE);
  print_statistics(median, mean, max, min);
 
 }
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */


/* Add other Implementation File Code Here */

