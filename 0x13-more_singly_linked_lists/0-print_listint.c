#include "lists.h"

/**
 * print_listint - imprime tous les éléments d'une liste chaînée
 * @h: liste chaînée à imprimer
 *
 * Return: nombre de nœuds
 */
size_t print_listint(const listint_t *h)
{
    size_t num = 0;

    while (h)
    {
        printf("%d\n", h->n);
        num++;
        h = h->next;
    }

    return num;
}

