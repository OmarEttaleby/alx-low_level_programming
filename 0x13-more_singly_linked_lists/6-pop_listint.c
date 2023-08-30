#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list and returns its data.
 * @head: Double pointer to the head of the list.
 *
 * Return: The head node's data (n). If the list is empty, return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *popped;
	int content;

	if (*head == NULL)
		return (0);

	popped = *head;
	content = popped->n;
	*head = (*head)->next;
	free(popped);

	return (content);
}

