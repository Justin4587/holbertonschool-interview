#include "sort.h"
/**
 * heap_sort - sort using heap sort method
 * @array: array to sort
 * @size: size of array
 *
 */
void heap_sort(int *array, size_t size)
{
  int i = 0;
  int j;
  int sizeint = (int)size;

  if (!array || size < 2)
    return;

  for (j = sizeint / 2; j > 0; j--)
    heapify(array, size, j - 1, sizeint);
    
  for (i = sizeint - 1; i > 0; i--)
    {
      swap(&array[0], &array[i]);
      print_array(array, size);
      heapify(array, size, 0, i);
    }
}

/**
 * heapify - sort using heap sort method
 * @array: array to sort
 * @size: size of array
 * @idx: integer
 * @index: integer
 */
void heapify(int *array, size_t size, int idx, int index)
{
  int largest = idx;
  int left = idx * 2 + 1;
  int right = idx * 2 + 2;
  
  if (left < index && array[left] > array[largest])
  {
    largest = left;
  }

  if (right < index && array[right] > array[largest])
  {
    largest = right;
  }

  if (largest != idx)
  {
    swap(&array[idx], &array[largest]);
    print_array(array, size);
    heapify(array, size, largest, index);
  }
}

/**
 * swap - sort using heap sort method
 * @a: array to sort
 * @b: size of array
 *
 */
void swap(int *a, int *b)
{
  int swap = *a;
  *a = *b;
  *b = swap;
}
