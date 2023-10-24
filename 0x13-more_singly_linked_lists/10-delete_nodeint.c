#include "lists.h"

/**
 * delete_nodeint_at_index - Supprime le nœud à un index spécifique d'une liste chaînée.
 * @head: Tête de la liste.
 * @index: Index de la liste où le nœud doit être supprimé.
 *
 * Return: 1 si la suppression a réussi, -1 en cas d'échec.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current;
	listint_t *node_to_delete;

	if (*head == NULL)
		return (-1);

	/* Si on veut supprimer le premier nœud */
	if (index == 0)
	{
		node_to_delete = *head;
		*head = (*head)->next;
		free(node_to_delete);
		return (1);
	}

	current = *head;

	/* On se positionne juste avant le nœud à supprimer ou à la fin de la liste */
	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	/* Si current est NULL ici ou que le nœud suivant est NULL, l'index est hors de la liste */
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	node_to_delete = current->next;
	current->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}

