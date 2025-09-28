#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Free all elements of a dlistint_t list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp;

    while (head)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
}
