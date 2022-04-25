#ifndef SORT_H
#define SORT_H

#include <stddef.h>


void print_array(const int *array, size_t size);
void heap_sort(int *array, size_t size);
void swap(int *a, int *b);
void heapify(int *array, size_t size, int idx, int index);

#endif /* SORT_H */
