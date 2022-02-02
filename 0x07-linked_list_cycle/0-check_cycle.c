#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - prints all elements of a listint_t list
 * @list: pointer to head of list
 * Return: 0 no 1 yes
 */
int check_cycle(listint_t *list)
{
  listint_t *head = list, *tail = list;

  if (list == NULL)
    return (0);
  while (head && tail && tail->next)
  {
    head = head->next;
    tail = tail->next->next;

    if (head == tail)
      return (1);
  }
  return (0);
}
