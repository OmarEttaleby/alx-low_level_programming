#include "main.h"

/**
 * get_bit - Récupère la valeur d'un bit à un index donné.
 * @n: Le nombre dont le bit doit être récupéré.
 * @index: L'index où la valeur doit être récupérée - les indices commencent à 0.
 *
 * Description: Cette fonction vérifie d'abord si l'index donné est 
 * valide (c'est-à-dire qu'il ne dépasse pas la taille d'un unsigned long int).
 * Ensuite, elle utilise un masque pour récupérer la valeur du bit à cet index.
 * 
 * Return: Si une erreur se produit - renvoie -1.
 *         Sinon, renvoie la valeur du bit à l'index (soit 0 soit 1).
 */
int get_bit(unsigned long int n, unsigned int index)
{
    // Vérifie si l'index est valide
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

    // Utilise un masque pour récupérer et tester la valeur du bit à l'index donné
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

