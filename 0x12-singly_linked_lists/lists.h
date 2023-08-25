#ifndef _LISTS_H_  /* Updated include guard to have _H at the end for clarity */
#define _LISTS_H_

/* Standard libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Structure representing a singly linked list.
 * @str: A pointer to the string associated with this node.
 * @len: Length of the string.
 * @next: A pointer to the next node in the list.
 *
 * Description: A singly linked list node that holds a string and its length.
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function prototypes */

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list.
 * Return: Number of nodes in the list.
 */
size_t print_list(const list_t *h);

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: A pointer to the head of the list.
 * Return: Number of elements in the list.
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the list's head.
 * @str: String to include in the new node.
 * Return: Address of the new element or NULL on failure.
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the list's head.
 * @str: String to include in the new node.
 * Return: Address of the new element or NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list.
 */
void free_list(list_t *head);

#endif /* _LISTS_H_ */

