#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index
 * @head: Pointer to pointer to the first element of the list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp;
    unsigned int p = 0;

    if (!head || !*head)
        return (-1);

    tmp = *head;

    /* Traverse to the node at index */
    while (tmp && p < index)
    {
        tmp = tmp->next;
        p++;
    }

    if (!tmp)
        return (-1);

    /* Deleting the head node */
    if (!tmp->prev)
    {
        *head = tmp->next;
        if (*head)
            (*head)->prev = NULL;
    }
    else
    {
        tmp->prev->next = tmp->next;
        if (tmp->next)
            tmp->next->prev = tmp->prev;
    }

    free(tmp);
    return (1);
}
