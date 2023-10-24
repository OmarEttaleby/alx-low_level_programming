#include "lists.h"

/**
 * free_listp - Libère une liste chaînée.
 * @head: Pointeur vers la tête de la liste.
 *
 * Return: Aucun retour.
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - Affiche une liste chaînée.
 * @head: Tête de la liste.
 *
 * Return: Nombre de nœuds dans la liste.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr = NULL, *new_node, *address;

	while (head)
	{
		new_node = malloc(sizeof(listp_t));
		if (!new_node)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = hptr;
		hptr = new_node;

		address = hptr;

		while (address->next)
		{
			address = address->next;
			if (head == address->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&hptr);
	return (nnodes);
}

