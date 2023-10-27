#include "main.h"

/**
 * flip_bits - Compte le nombre de bits à inverser
 *             pour passer d'un nombre à un autre.
 * @n: Le nombre.
 * @m: Le nombre vers lequel n doit être inversé.
 *
 * Return: Le nombre nécessaire de bits à inverser pour passer de n à m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

