#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory
 * @b: The size of mmory to allocate
 *
 * Return: 0 if memory allocated, 98 otherwise
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	
		exit (98);
	
	return (a);
}
