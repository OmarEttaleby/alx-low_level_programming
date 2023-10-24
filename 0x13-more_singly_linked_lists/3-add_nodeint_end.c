#include "lists.h"

/**
 * add_nodeint_end - Ajoute un nouveau nœud à la fin
 * de la liste chaînée
 * @head: tête de la liste.
 * @n: élément n.
 *
 * Return: adresse du nouvel élément, ou NULL en cas d'échec.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	(void)temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}

