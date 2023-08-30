#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;  // Store next node
		(*head)->next = prev;       // Update the current node's next to previous node
		prev = *head;               // Move the previous to the current node
		*head = next_node;          // Move to next node
	}

	*head = prev;
	return (*head);
}

