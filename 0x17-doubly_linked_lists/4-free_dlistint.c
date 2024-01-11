#include "lists.h"

/**
 * free_dlistint - frees memory
 * @head: head first
 * Return: NULL
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
