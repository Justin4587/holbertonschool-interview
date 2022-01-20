#include "lists.h"


/**
 * is_palindrome - checks if palindrome
 * @head: pointer to head of list
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(listint_t **head)
{
	if (!*head)
		return (1);

	return (is_pali(head, *head));
}



/**
 * is_pali - checks if palindrome
 * @head: pointer to head of list
 * @tail: copy of head
 * Return: 1 if palindrome, else 0
 */

int is_pali(listint_t **head, listint_t *tail)
{
	if (!tail)
		return (1);
	if (is_pali(head, tail->next) && (*head)->n == tail->n)
	{
		*head = (*head)->next;
			return (1);
	}
	else
	{
		return (0);
	}
}
