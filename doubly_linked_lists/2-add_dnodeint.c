#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: data to add
 *
 * Return:  the newly created node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
printf("Error\n");
return (NULL);
}
new_node->n = n;
if (*head)
{
(*head)->prev = new_node;
new_node->prev = NULL;
}
new_node->next = *head;
*head = new_node;
return (new_node);
}
