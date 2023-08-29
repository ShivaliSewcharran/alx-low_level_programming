#include "lists.h"
/**
 * free_listint2 - Releases memory used by a linked list and sets the head to NULL
 * @head: A pointer to the pointer of the listint_t list to be deallocated
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
