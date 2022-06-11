#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


void _print_array(const int *array, int beg, int end);
void meatAndPotatoes(int *array, size_t size, int beg, int mid, int end, int *served);
void multiLaneDrinkStation(int *array, size_t size, int beg, int mid, int end, int *served);
void print_array(const int *array, size_t size);
void merge_sort(int *array, size_t size);

#endif /* SORT_H */
