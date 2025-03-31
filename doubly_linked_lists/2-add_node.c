#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string.
 * @s: String to calculate length for.
 *
 * Return: the length of a string.
 */

int _strlen(const char *s)
{
if (*s)
return (1 + _strlen(s + 1));
return (0);
}

/**
 * add_node - adds a new node at the beginning of a linked list_t list
 * @head: pointer to the head of the list
 * @str: string data
 *
 * Return:  the newly created node
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
printf("Error\n");
return (NULL);
}
new_node->str = strdup(str);
new_node->len = _strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
