#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the start of the linked list.
 *
 * Return: Number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
    size_t node_count = 0;

    for (; h; h = h->next)
        node_count++;

    return (node_count);
}


















