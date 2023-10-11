#include "search_algos.h"


/**
 * binary_search_recursion - Recursively y
 *
 * @array: Pointer to the first element of the array to search in
 * @left: Index of the first element in current search space
 * @right: Index of the last element in current search space
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 on failure
 */
int binary_search_recursion(int *array, int value, 
                             size_t low, size_t high) 
 { 
         size_t mid, i; 
  
         if (!array) 
                 return (-1); 
  
         mid = (low + high) / 2; 
         printf("Searching in array: "); 
         for (i = low; i <= high; i++) 
                 printf("%i%s", array[i], i == high ? "\n" : ", "); 
  
         if (array[low] == value) 
                 return ((int)low); 
  
         if (array[low] != array[high]) 
         { 
                 if (array[mid] < value) 
                         return (binary_search_recursion(array, value, 
                                                         mid + 1, high)); 
                 if (array[mid] >= value) 
                         return (binary_search_recursion(array, value, 
                                                         low, mid)); 
         } 
  
         return (-1); 
 } 



/**
 * advanced_binary - Searches for a vh
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value) 
 { 
         size_t low = 0; 
         size_t high = size - 1; 
  
         if (!array) 
                 return (-1); 
  
         return (binary_search_recursion(array, value, low, high)); 
 }

