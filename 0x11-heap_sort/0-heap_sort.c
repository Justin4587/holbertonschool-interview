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

  if (!array)
  return;

  //printf("%li", size);

  //heapify(array, size, 0);
  //heapify(array, size, i);
  //print_array(array, size);

  while (i < (int)size)
  {
    heapify(array, size, 0 + i);
    //printf("%d", i);
    //print_array(array, size);
    i++;
  }
  while (i < (int)size)
  {
    heapify(array, size, 0 + i);
    //printf("%d", i);
    // print_array(array, size);
    i++;
  }
  heapify(array, size, 0);
}

/**
 * heapify - sort using heap sort method
 * @array: array to sort
 * @size: size of array
 *
 */
void heapify(int *array, size_t size, int idx)
{
  int largest = idx;
  int left = (idx * 2) + 1;
  int right = (idx * 2) + 2;

  while (idx < (int)size)
  {
    if (left <= (int)size && array[left] < array[largest])
    {
      largest = left;
      
    }

    if (right <= (int)size && array[right] < array[largest])
    {
      largest = right;
      
    }

    if (largest > idx)
    {
      swap(&array[largest], &array[idx]);
      heapify(array, size, idx + 1);
    }

    right += 1;
    left += 1;
    idx = idx + 1;
    print_array(array, size);
  }
}

/**
 * swap - sort using heap sort method
 * @a: array to sort
 * @b: size of array
 *
 */
void swap(int* a, int* b)
{
  int swap = *a;
  *a = *b;
  *b = swap;
}
