#include "lists.h"
#include <stdlib.h>
/**
 * insert_node - insert node at given index
 * @node: pointer to nth position node in doubly linked list
 * @n: node data
 * Return: pointer to the newly inserted node
 */
dlistint_t *insert_node(dlistint_t *node, int n)
{
dlistint_t *new_node;

new_node = malloc(sizeof(struct dlistint_s));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = node;
new_node->prev = node->prev;
node->prev->next = new_node;
node->prev = new_node;
return (new_node);
}

/**
 * insert_dnodeint_at_index - create and insert node at nth index
 * @h: pointer to the head of the list
 * @idx: index to insert at
 * @n: node to add
 * Return: pointer to the newly inserted node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp;

if (idx == 0)
return (add_dnodeint(h, n));
if (!h)
return (NULL);

tmp = *h;
while ((idx != 0) && (tmp->next))
{
idx -= 1;
tmp = tmp->next;
if (idx == 0)
return (insert_node(tmp, n));
}

if (idx == 1)
return (add_dnodeint_end(h, n));
return (NULL);
}
