#include "lists.h"

/**
 * print_listint - imprime tous les éléments d'une liste chaînée
 * @h: liste chaînée de type listint_t à imprimer
 *
 * Return: nombre de nœuds
 */
size_t print_listint(const listint_t *h)
{
    size_t num = 0;  // initialiser le compteur de nœuds

    while (h)  // tant que le nœud courant n'est pas NULL
    {
        printf("%d\n", h->n);  // imprimer la valeur du nœud courant
        num++;  // augmenter le compteur de nœuds
        h = h->next;  // passer au nœud suivant
    }

    return (num);  // retourner le nombre total de nœuds
}

