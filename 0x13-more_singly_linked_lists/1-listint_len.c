#include "lists.h"
/**
 * listint_len - Counts the elements in a linked list
 * @h: A pointer to the linked list of type listint_t to be counted
 *
 * Return: The count of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
