#include <stdlib.h>
#include "binary_trees.h"

/**
* heap_insert - create node
*
* @root: int
* @value: Pointer to the root of the tree to delete
* Return: pointer to node
*/

heap_t *heap_insert(heap_t **root, int value)
{
    heap_t *bud = NULL;
    heap_t *wait_here = NULL;

    int storage;

    if (!(*root) || !root)
    {
        bud = binary_tree_node(NULL, value);
        *root = bud;
        return (bud);
    }

    bud = binary_tree_node(*root, value);
    wait_here = bud;
    while (wait_here && wait_here->parent && wait_here->parent->n < wait_here->n)
    {
        storage = wait_here->n;
        wait_here->n = wait_here->parent->n;
        wait_here->parent->n = storage;
        wait_here = wait_here->parent;
    }
    if (wait_here->left == NULL)
        wait_here->left = bud;
    else
        wait_here->right = bud;

    return (wait_here);

}
