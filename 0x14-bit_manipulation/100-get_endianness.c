#include "main.h"

/**
 * get_endianness - Vérifie l'endianness.
 *
 * Return: Si c'est big-endian - renvoie 0.
 *         Si c'est little-endian - renvoie 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}

