#include "lists.h"

/**
 * pop_listint - Supprime le premier élément d'une liste chaînée
 * @head: double pointeur vers la tête de la liste.
 *
 * Return: Données du premier élément.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *curr;

	if (!*head)
		return (0);

	curr = *head;

	hnode = curr->n;

	*head = curr->next;

	free(curr);

	return (hnode);
}

