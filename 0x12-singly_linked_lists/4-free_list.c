#include "lists.h"

/**
 * free_list - libère la mémoire occupée par la liste list_t
 * @head: pointeur vers le début de la liste
 * Return: rien (void)
 */
void free_list(list_t *head)
{
	list_t *premier_noeud;
	
	/* Vérifier si la tête est nulle
	/* Si c'est le cas, la liste est vide et on retourne simplement
	while (head != NULL)
	{
		/* Sauvegarder le noeud actuel dans une variable premier_noeud
		premier_noeud = head;
		/* Et faire pointer la tête vers le noeud suivant dans list_t
		head = head->next;
		
		/* Libérer en toute sécurité la référence à str
		free(premier_noeud->str);
		
		/* Libérer en toute sécurité le premier_noeud
		free(premier_noeud);
		
		/* Souvenez-vous que nous libérons la mémoire de l'intérieur vers l'extérieur
	}
}

