#include "lists.h"

/**
 * get_nodeint_at_index - Retourne le n-ème nœud d'une liste chaînée
 * @head: tête de la liste.
 * @index: indice du nœud souhaité.
 *
 * Return: n-ème nœud. Si le nœud n'existe pas, retourne NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
		head = head->next;

	return (head);
}

