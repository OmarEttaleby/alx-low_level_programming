#include "lists.h"

/**
 * print_listint - affiche tous les éléments d'une liste.
 * @h: tête de la liste.
 *
 * Retour: nombre de nœuds.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

