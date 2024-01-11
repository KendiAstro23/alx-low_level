#include "lists.h"

/**
 * dlistint_len - length of doubly
 * linked list
 *
 * @h: head pointer
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
