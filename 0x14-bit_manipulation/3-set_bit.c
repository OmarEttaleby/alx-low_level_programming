#include "main.h"

/**
 * set_bit - Définit la valeur d'un bit à un index donné à 1.
 * @n: Un pointeur vers le bit.
 * @index: L'index où la valeur doit être définie.
 *         Les indices commencent à 0.
 * 
 * Return: En cas d'erreur, renvoie -1.
 *         Sinon, renvoie 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

