#include "lists.h"

/**
 * insert_nodeint_at_index - Insère un nouveau nœud à une position donnée.
 * @head: Tête de la liste.
 * @idx: Index de la liste où le nouveau nœud doit être ajouté.
 * @n: Élément entier.
 *
 * Return: L'adresse du nouveau nœud ou NULL en cas d'échec.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* Si on veut insérer au début de la liste */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* On se positionne à l'index désiré ou à la fin de la liste */
	for (i = 0; i < idx - 1 && current; i++)
		current = current->next;

	/* Si current est NULL ici, idx est hors de la liste */
	if (!current)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

