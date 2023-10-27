#include "main.h"

/**
 * get_bit - Récupère la valeur d'un bit à un index donné.
 * @n: Le nombre dont le bit doit être récupéré.
 * @index: L'index où la valeur doit être récupérée - les indices commencent à 0.
 *
 * Return: En cas d'erreur, renvoie -1.
 *         Sinon, renvoie la valeur du bit à l'index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

