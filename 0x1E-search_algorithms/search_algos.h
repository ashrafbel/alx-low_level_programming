#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_(int *array, size_t left, size_t right, int value);
#endif
