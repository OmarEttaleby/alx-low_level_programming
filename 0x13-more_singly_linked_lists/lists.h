#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - liste chaînée simple
 * @n: entier
 * @next: pointe vers le nœud suivant
 *
 * Description: structure de nœud de liste chaînée simple
 * pour le projet Holberton
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

// Prototypes des fonctions
size_t print_listint(const listint_t *h); // Imprimer la liste
size_t listint_len(const listint_t *h); // Obtenir la longueur de la liste
listint_t *add_nodeint(listint_t **head, const int n); // Ajouter un nœud au début
listint_t *add_nodeint_end(listint_t **head, const int n); // Ajouter un nœud à la fin
void free_listint(listint_t *head); // Libérer la liste
void free_listint2(listint_t **head); // Libérer la liste en utilisant un double pointeur
int pop_listint(listint_t **head); // Supprimer le premier nœud
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index); // Obtenir le nœud à un index spécifique
int sum_listint(listint_t *head); // Somme des données de tous les nœuds
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n); // Insérer un nœud à un index spécifique
int delete_nodeint_at_index(listint_t **head, unsigned int index); // Supprimer un nœud à un index spécifique
listint_t *reverse_listint(listint_t **head); // Inverser la liste
size_t print_listint_safe(const listint_t *head); // Imprimer la liste de manière sécurisée (pour les listes contenant des boucles)
size_t free_listint_safe(listint_t **h); // Libérer la liste de manière sécurisée (pour les listes contenant des boucles)
listint_t *find_listint_loop(listint_t *head); // Trouver une boucle dans la liste

#endif

