#include "lists.h"

/**
 * free_listint2 - Libère une liste chaînée et met le pointeur de tête à NULL
 * @head: double pointeur vers la tête de la liste.
 *
 * Return: Ne retourne rien.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

