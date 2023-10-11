#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump_search
 * @array: the array to chk
 * @size: the size of the array
 * @value: the value of the array
 * Return: the value searched or -1 if not found
 */

int jump_search(int *array, size_t size, int value) 
 { 
         size_t low = 0; 
         size_t high = 0, i = 0; 
  
         if (array != NULL) 
         { 
                 while (high < size && array[high] < value) 
                 { 
                         low = high; 
                         high = high + sqrt(size); 
                         printf("Value checked array[%lu] = [%d]\n", 
                                low, array[low]); 
                 } 
                 printf("Value found between indexes [%lu] and [%lu]\n", 
                        low, high); 
                 for (i = low; i <= high; i++) 
                 { 
                         if (i < size) 
                         { 
                                 printf("Value checked array[%lu] = [%d]\n", 
                                        i, array[i]); 
                                 if (array[i] == value) 
                                         return (i); 
                         } 
                 } 
         } 
         return (-1); 
 }