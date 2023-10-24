#include "lists.h"

/**
 * reverse_listint - Inverse une liste chaînée.
 * @head: Pointeur vers la tête de la liste.
 *
 * Return: Pointeur vers le premier nœud de la liste inversée.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node;
	listint_t *next_node;

	prev_node = NULL;
	next_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;  /* Sauvegarde le nœud suivant */
		(*head)->next = prev_node;  /* Fait pointer le nœud actuel vers le précédent */
		prev_node = *head;          /* Met à jour le nœud précédent pour être l'actuel */
		*head = next_node;          /* Avance à la prochaine position */
	}

	*head = prev_node; /* Réaffecte la tête à la fin de la liste originale */
	return (*head);
}

