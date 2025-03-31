
// C program to demonstrate the difference
// between %i and %d specifier
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

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
    new_node->len = strlen(str);
    
    new_node->next = *head;
    *head = new_node;
    return (new_node);
}
//void *add_node_end(list_t **head, const char *str)
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *tmp = *head;
    list_t *new_node;
    while(tmp->next)
    {
        tmp = tmp->next;
    }
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        printf("Error\n");
        return (NULL);
    }
    new_node->str = strdup(str);
    new_node->len = strlen(str);
    new_node->next = NULL;
    tmp->next = new_node;
    return (new_node);
}
size_t print_list(const list_t *h)
{
    size_t counter = 0;
    
    while (h != NULL)
    {
        printf("[%d] %s\n",h->str?h->len:0,h->str?h->str:"nil");
        h = h->next;
        counter++;
    }
    return (counter);
}

size_t list_len(const list_t *h)
{
    size_t len = 0;
    while (h)
    {
        len++;
        h = h->next;
    }
    return (len);
}
int main()
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    
    printf("%p\n",head);
    print_list(head);
    printf("%d\n",list_len(head));
    printf("%p\n",head);
    
    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    add_node_end(&head, "Daniel");
    add_node_end(&head, "Danton");
    add_node_end(&head, "David");
    add_node_end(&head, "Gary");
    add_node_end(&head, "Holden");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Jay");
    add_node_end(&head, "Jennie");
    add_node_end(&head, "Jimmy");
    add_node_end(&head, "Justin");
    add_node_end(&head, "Kalson");
    add_node_end(&head, "Kina");
    add_node_end(&head, "Matthew");
    add_node_end(&head, "Max");
    add_node_end(&head, "Michael");
    add_node_end(&head, "Ntuj");
    add_node_end(&head, "Philip");
    add_node_end(&head, "Richard");
    add_node_end(&head, "Samantha");
    add_node_end(&head, "Stuart");
    add_node_end(&head, "Swati");
    add_node_end(&head, "Timothy");
    add_node_end(&head, "Victor");
    add_node_end(&head, "Walton");
    
    printf("%p\n",head);
    print_list(head);
    printf("%d\n",list_len(head));
    printf("%p\n",head);
    return (0);
}
