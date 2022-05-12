#include "binary_trees.h"
#include <stdlib.h>

/**
 * heap_extract - Binary tree node
 *
 * @root: Pointer to the root
 * Return: root node
 */
int heap_extract(heap_t **root)
{
  if (!(*root) || !root)
    return (0);

  return ((*root)->n);
}
