#include "lists.h"
#include <stdio.h>

/**
 * print_listint - affiche tous les éléments d'une liste de type listint_t.
 *
 * @h: tête du nœud de la liste chaînée
 *
 * Return: le nombre de nœuds
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

