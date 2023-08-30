#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Double pointer to the head of the list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *cursor;

	if (!head)
		return;

	while (*head)
	{
		cursor = *head;
		*head = (*head)->next;
		free(cursor);
	}
	*head = NULL;
}



























