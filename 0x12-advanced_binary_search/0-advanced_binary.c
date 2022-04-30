#include "search_algos.h"

/**
 * advanced_binary - searchy algo
 * @array: array
 * @size: int size of array
 * @value: int to look for
 * Return: location or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_search_adv(array, value, 0, (int)size - 1));
}

/**
 * binary_search_adv - searchy algo
 * @array: array
 * @sub: int size of array
 * @value: int to look for
 * @start: value sub array
 * Return: location or -1
 */
int binary_search_adv(int *array, int value, int start, int sub)
{
	int temp;

	if (sub >= start)
	{
		print_it(array, start, sub);
		temp = start + (sub - start) / 2;
		if (array[temp] == value && array[temp - 1] != value)
			return (temp);
		if (array[temp] >= value)
			return (binary_search_adv(array, value, start, temp));

		return (binary_search_adv(array, value, temp + 1, sub));
	}
	return (-1);
}

/**
 * print_it - searchy algo print func
 * @array: array
 * @sub: int size of array
 * @start: value sub array
 * Return: void
 */
void print_it(int *array, int start, int sub)
{
	int i;

	printf("Searching in array: ");

	for (i = start; i <= sub; i++)
	{
		printf("%d", array[i]);
		if (i < sub)
			printf(", ");
	}

	printf("\n");
}
