#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>
#include <stdio.h>

int advanced_binary(int *array, size_t size, int value);
int binary_search_adv(int *array, int value, int start, int sub);
void print_it(int *array, int start, int end);

#endif /* SEARCH_ALGOS_H */
