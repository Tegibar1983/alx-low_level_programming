#include "lists.h"
#include <string.h>

/**
 * add_node - Function that adds new node at list_t list
 * @head: head list_t list pointer
 * @str:string
 * Return: Return NULL if fails
 * Otherwise:  new element address
 */

list_t *add_node(list_t **head, const char *str)
{
char *dup;
int len;
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

dup = strdup(str);
if (dup == NULL)
{
free(new);
return (NULL);
}

for (len = 0; str[len];)
len++;

new->str = dup;
new->len = len;
new->next = *head;

*head = new;

return (new);
}

