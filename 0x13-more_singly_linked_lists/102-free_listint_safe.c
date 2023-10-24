#include "lists.h"

/**
 * free_listp2 - Libère une liste chaînée.
 * @head: Pointeur vers la tête de la liste.
 *
 * Return: Aucun retour.
 */
void free_listp2(listp_t **head)
{
	listp_t *current;
	listp_t *next_node;

	if (head && *head)
	{
		current = *head;
		while (current)
		{
			next_node = current->next;
			free(current);
			current = next_node;
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - Libère une liste chaînée de manière sécurisée.
 * @h: Pointeur vers la tête de la liste.
 *
 * Return: Taille de la liste qui a été libérée.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr = NULL, *new_node, *address;
	listint_t *current_node;

	while (*h)
	{
		new_node = malloc(sizeof(listp_t));
		if (!new_node)
			exit(98);

		new_node->p = (void *)*h;
		new_node->next = hptr;
		hptr = new_node;

		address = hptr;

		while (address->next)
		{
			address = address->next;
			if (*h == address->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}

		current_node = *h;
		*h = (*h)->next;
		free(current_node);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}

