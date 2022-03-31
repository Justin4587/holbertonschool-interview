#include "search.h"
/**
 * linear_skip - search for stuff while skipping through a sorted list
 * @list: pointer to head
 * @value: int
 * Return: pointer to node where value is located
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = NULL;
	skiplist_t *exp = NULL;

	if (!list || list->n > value)
		return (NULL);
	temp = list;
	exp = list->express;

	while (exp)
	{
		printf("Value checked at index [%lu] = [%d]\n", exp->index, exp->n);
		if (exp->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				   temp->index, exp->index);
			break;
		}
		temp = temp->express;
		exp = exp->express;
	}

	while (temp->index != exp->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
		if (value)
			break;
		temp = temp->next;
	}
	if (temp->n == value)
		return (temp);
	return (NULL);
}
