#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: Head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor)
	{
		printf("%d\n", cursor->n);
		count++;
		cursor = cursor->next;
	}
	return (count);
}

