#include "lists.h"

/**
 * sum_listint - Retourne la somme de toutes les données (n) d'une liste chaînée.
 * @head: tête de la liste.
 *
 * Return: Somme de toutes les données (n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

