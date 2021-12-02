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
 * @author <Houssem Moslah>
 * @date <30/09/2021>
 *
 */
#ifndef __Houssem_H__
#define __Houssem_H__

/* Add Your Declarations and Function Comments here */ 
void sort_array(unsigned char test[],int SIZE) {
       unsigned char temp = 0;
       for (int j = 0; j < SIZE; j++) {
               for (int i = 1; i < SIZE; i++) {
                       if (test[j] > test[i]) {
                               temp = test[j];
                               test[j] = test[i];
                               test[i] = temp;

                       }
               }
               
       }
}
void print_statistics(int median, int mean, int max, int min) {
       printf("Median = %i; \t Mean = %i; \t Max = %i; \t Min = %i\n", median, mean, max, min);
}

void print_array(unsigned char test[],int SIZE) {
       int i = 0;
       for (i = 0; i < SIZE; i++) {
               printf("%i\t%i\n", test[i], i);
       }
}
 
int find_maximum(unsigned char test[],int SIZE) {
       int i, max =test[0];
       for(i = 0; i < SIZE; i++) 
               if(max < test[i]) 
                       max = test[i];
       return max;
               
}

int find_minimum(unsigned char test[],int SIZE) {
       int i, min =test[0];
       for(i = 0; i < SIZE; i++) 
               if(test[i]< min) 
                       min = test[i];
       return min;
}

int find_median(unsigned char sorted_array[],int SIZE) {
       int median=0;
       if (SIZE % 2 == 0) {
               median = (sorted_array[(SIZE-1)/2] + sorted_array[SIZE/2])/2.0;
       } else {
               median = sorted_array[SIZE/ 2];
       }
       return median;
}
 
int find_mean(unsigned char test[],int SIZE) {
       int i, mean; 
         mean=0;
       for(i = 0; i < SIZE; i++) {
               mean = mean + test[i];
       }
       mean = mean /i ;
       return mean;
 }


#endif /* __Houssem_H__ */

