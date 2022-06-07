#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


void print_array(const int *array, size_t size);
void meatAndPotatoes(int *array, size_t size, int beg, int mid, int end, int *served);
void multiLaneDrinkStation(int *array, size_t size, int beg, int mid, int end, int *served);
void merge_sort(int *array, size_t size);

#endif /* SORT_H */
