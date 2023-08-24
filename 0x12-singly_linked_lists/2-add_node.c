#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *my_add_node(my_list_t **my_list, const char *str)
{
	my_list_t *new_node;
	unsigned int len = 0;

	while (data[length])
		length++;

	new_node = malloc(sizeof(my_list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*my_list) = new_node;

	return (*my_list);
}
