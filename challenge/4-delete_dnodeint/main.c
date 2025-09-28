#include "lists.h"
#include <stdlib.h>

/**
 * main - Test double linked list functions
 *
 * Return: 0 on success
 */
int main(void)
{
    dlistint_t *head = NULL;

    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 5);
    add_dnodeint_end(&head, 9);
    add_dnodeint_end(&head, 13);

    print_dlistint(head);

    delete_dnodeint_at_index(&head, 2); 
    print_dlistint(head);

    free_dlistint(head);
    return (0);
}
