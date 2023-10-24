#include "lists.h"

/**
 * free_listint - Libère une liste chaînée
 * @head: tête de la liste.
 *
 * Return: Ne retourne rien.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

