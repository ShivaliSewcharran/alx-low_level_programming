#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * my_add_node_end - adds a new node at the end of my custom linked list
 * @my_list: double pointer to the my_list_t list
 * @data: string to store in the new node
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
i}
