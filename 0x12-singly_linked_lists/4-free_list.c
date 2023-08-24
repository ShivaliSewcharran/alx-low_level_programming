#include <stdlib.h>
#include "my_lists.h"  // Replace "lists.h" with your own header file

/**
 * my_custom_free_list - Frees a custom linked list
 * @my_list: my_list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
