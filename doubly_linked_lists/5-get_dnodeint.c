#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: the node at the nth index, NULL otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
int i = 0;
while (head)
{
if (i == index)
return (head);
head = head->next;
i++;
}
return (NULL);
}
