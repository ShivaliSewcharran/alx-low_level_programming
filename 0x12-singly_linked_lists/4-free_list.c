#include <stdlib.h>
#include "my_lists.h"  // Replace "lists.h" with your own header file

/**
 * my_custom_free_list - Frees a custom linked list
 * @my_list: my_list_t list to be freed
 */
void my_custom_free_list(my_list_t *my_list)
{
	my_list_t *temp;
	
	while (my_list)
	{
	temp = my_list->next;
	free(my_list->data);
	free(my_list);
	my_list = temp;
	}
}
