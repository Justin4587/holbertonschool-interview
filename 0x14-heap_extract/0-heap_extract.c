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
	heap_t *head = NULL, *temp = NULL;
	int rootNode = 0;

	if (!(*root) || !root)
		return (0);
	head = *root;
	rootNode = head->n;
	if (!head->left && !head->right)
	{
		*root = NULL;
		return (free(head), rootNode);
	}
	temp = last(*root);
	if (temp->parent->left == temp)
		temp->parent->left = NULL;
	else
		temp->parent->right = NULL;
	temp->left = head->left;
	temp->right = head->right;
	temp->parent = head->parent;

	if (head->left)
		head->left->parent = temp;
	if (head->right)
		head->right->parent = temp;

	*root = temp;
	free(head);

	heapIt(*root);
	return (rootNode);
}

/**
 * heightNodeCount - get a number call it what you want
 *
 * @root: Pointer to the root
 * Return: # of nodes
 */
int heightNodeCount(heap_t *root)
{
	int left = 0, right = 0;

	if (root == NULL)
		return (0);

	left = heightNodeCount(root->left);
	right = heightNodeCount(root->right);
	return (left + right + 1);
}

/**
 * last - last node   heap_t binary_tree_t _s _j all a bitch
 *
 * @root: Pointer to the root
 * Return: last node
 */
heap_t *last(heap_t *root)
{
	int bal = 0, nodeCount = 0;
	heap_t *temp = NULL;

	nodeCount = heightNodeCount(root);
	for (bal = 1; bal <= nodeCount; bal <<= 1)
		;
	bal >>= 2;

	for (temp = root; bal > 0; bal >>= 1)
	{
		if (nodeCount & bal)
			temp = temp->right;
		else
			temp = temp->left;
	}
	return (temp);
}
/**
 * heapIt - heapify the thing
 *
 * @root: Pointer to the root
 * Return: None
 */
void heapIt(heap_t *root)
{
	int nodeN = 0;
	heap_t *temp = NULL;

	while (1)
	{
		if (root->left == NULL)
			break;
		else if (root->right == NULL)
			temp = root->left;
		else if (root->left->n >= root->right->n)
			temp = root->left;
		else
			temp = root->right;
		if (root->n >= temp->n)
			break;

		nodeN = root->n, root->n = temp->n, temp->n = nodeN;
		root = temp;
	}
}
