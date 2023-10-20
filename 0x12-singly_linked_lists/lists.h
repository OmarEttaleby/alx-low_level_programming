#ifndef _LIST_H
#define _LIST_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_s - liste simplement chaînée
 * @str: chaîne - (chaîne allouée avec malloc)
 * @len: longueur de la chaîne
 * @next: pointe vers le prochain nœud
 *
 * Description: structure de nœud de liste simplement chaînée
 * pour le projet Holberton
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

