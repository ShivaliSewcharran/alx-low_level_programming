#include <stdlib.h>
#include <string.h>
#include "my_lists.h"

/**
 * my_add_node_end - adds a new node at the end of my custom linked list
 * @my_list: double pointer to the my_list_t list
 * @data: string to store in the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
my_list_t *my_add_node_end(my_list_t **my_list, const char *data)
{
	my_list_t *new_node;
	my_list_t *temp = *my_list;
	unsigned int length = 0;

	while (data[length])
		length++;

	new_node = malloc(sizeof(my_list_t));
	if (!new_node)
	return (NULL);

	new_node->data = strdup(data);
	new_node->length = length;
	new_node->next = NULL;

	if (*my_list == NULL)
	{
	*my_list = new_node;
	return (new_node);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new_node;
	return (new_node);
}
