#include "lists.h"
#include <stdlib.h>
/**
* insert_node - function for stuff
* @head: asdfrg
* @number: id
* Return: line
*/


listint_t *insert_node(listint_t **head, int number)
{
    listint_t *list = NULL;
    listint_t *copy = NULL;


    list = malloc(sizeof(listint_t));
    if (list == NULL)
        return (NULL);

    list->n = number;


    if (!*head || (*head)->n > number)
    {
        
        list->next = *head;
        *head = list;
    }
    else
    {
        copy = *head;

        while (copy->next && copy->next->n < number)
            copy = copy->next;
        list->next = copy->next;
        copy->next = list; 
    }
    return(list);

}
