#include "binary_trees.h"
/**
 * sorted_array_to_avl - makes a tree
 * @array: sorted array
 * @size: int size
 * Return: head or null
 */

avl_t *sorted_array_to_avl(int *array, size_t size)
{
    avl_t *head = NULL;

    if (array == NULL || size == 0)
        return (NULL);

    return (world_tree(head, array, 0, size - 1));
}

/**
 * world_tree - actual builder
 * @tree: head
 * @array: sorted array
 * @start: 0
 * @end: size - 1
 * Return: head
 */

avl_t *world_tree(avl_t *head, int *array, size_t start, size_t end)
{
    size_t mid = (start + end) / 2;
    avl_t *new;

    if (start > end)
        return (NULL);

    new = malloc(sizeof(avl_t));
    if (new == NULL)
        return (NULL);

    new->n = array[mid];
    new->left = NULL;
    new->right = NULL;
    new->parent = head;

    if (new == NULL)
        return (NULL);
    if (mid != start)
        new->left = world_tree(new, array, start, mid - 1);
    if (mid != end)
        new->right = world_tree(new, array, mid + 1, end);

    return (new);
}
