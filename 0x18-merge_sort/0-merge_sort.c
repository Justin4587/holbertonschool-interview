#include <stdlib.h>
#include <stdio.h>
#include "sort.h"


/**
 * merge_sort - Sorts an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void merge_sort(int *array, size_t size)
{
	int beg = 0, mid = 0, end = size - 1;
	int *served;

	served = malloc(sizeof(int) * size);
	if (!served || !array || size < 2)
		return;

	multiLaneDrinkStation(array, size, beg, mid, end, served);
	free(served);
}


/**
 * multiLaneDrinkStation - Divide and Conquer
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 * @beg: POS in @array
 * @mid: POS in @array
 * @end: POS in @array
 * @served: Hopefully finished product
 */
void multiLaneDrinkStation(int *array, size_t size, int beg,
	int mid, int end, int *served)
{
	if (beg < end)
	{
		mid = (beg + end) / 2;
		multiLaneDrinkStation(array, size, beg, mid, mid, served);
		multiLaneDrinkStation(array, size, mid + 1, mid, end, served);
		meatAndPotatoes(array, size, beg, mid, end, served);
	}
}


/**
 * meatAndPotatoes - Doing the thing
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 * @beg: POS in @array
 * @mid: POS in @array
 * @end: POS in @array
 * @served: Hopefully finished product
 */
void meatAndPotatoes(int *array, size_t size __attribute__((unused)),
	int beg, int mid, int end, int *served)
{
	int i = beg, j = mid + 1, k = 0;

	print_array(array, size);
	print_array(served, size);
	while (i <= mid && j <= end)
	{
		if (array[i] <= array[j])
		{
			served[k] = array[i];
			i++;
			k++;
		} else
		{
			served[k] = array[j];
			j++;
			k++;
		}
	}

	while (i <= mid)
	{
		served[k] = array[i];
		k++;
		i++;
	}

	while (j <= end)
	{
		served[k] = array[j];
		k++, j++;
	}

	for (i = beg; i <= end; i++)
		array[i] = served[i - beg];

}
