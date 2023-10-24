#include "lists.h"

/**
 * find_listint_loop - Trouve la boucle dans une liste chaînée.
 * @head: Tête de la liste.
 *
 * Return: L'adresse du nœud où commence la boucle, ou NULL si pas de boucle.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = head;
	hare = head;

	/* Vérifie si une boucle existe en utilisant l'algorithme du lièvre et de la tortue */
	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		/* Si la tortue et le lièvre se rencontrent, une boucle existe */
		if (tortoise == hare)
		{
			/* Reinitialiser tortue à la tête pour trouver le début de la boucle */
			tortoise = head;

			/* Continue jusqu'à ce que la tortue et le lièvre se rencontrent au début de la boucle */
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}

	/* Si on atteint ici, aucune boucle n'a été trouvée */
	return (NULL);
}

