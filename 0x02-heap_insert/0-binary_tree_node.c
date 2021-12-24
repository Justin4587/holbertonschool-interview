#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_node - create node
*
* @value: int
* @parent: Pointer to the root of the tree to delete
* Return: pointer to node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
