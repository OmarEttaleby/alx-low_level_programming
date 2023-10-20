#include "lists.h"

/**
 * list_len - retourne le nombre d'éléments dans list_t
 * @p: pointeur constant de type list_t
 *
 * Return: nombre d'éléments dans list_t
 */
size_t list_len(const list_t *p)
{
	size_t numele;

	numele = 0;

	while (p != NULL)
	{
		numele++;
		p = p->next;
	}
	return (numele);
}

