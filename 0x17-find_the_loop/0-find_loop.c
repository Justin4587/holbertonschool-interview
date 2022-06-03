#include "lists.h"

/**
* find_listint_loop - find a loop
*
* @head: points to something
* Return: node where the loop starts, or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort, *hare;

	if (!head || !head->next)
		return (NULL);

	tort = hare = head;

	while (hare->next && hare->next->next)
	{
		tort = tort->next;
		hare = hare->next->next;
		if (tort == hare)
		{
			tort = head;
			while (tort != hare)
			{
				tort = tort->next;
				hare = hare->next;
			}
			return (hare);
		}
	}
	return (NULL);
}
