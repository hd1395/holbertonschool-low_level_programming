#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: data to add
 *
 * Return:  the newly created node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tmp = *head;
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
printf("Error\n");
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;
while (tmp && tmp->next)
tmp = tmp->next;
if (!tmp)
*head = new_node;
else
{
tmp->next = new_node;
new_node->prev = tmp;
}
return (new_node);
}
