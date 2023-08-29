#include "lists.h"
/**
 * free_listint - Releases memory occupied by a linked list
 * @head: A pointer to the listint_t list to be deallocated
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
