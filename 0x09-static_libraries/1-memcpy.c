#include "main.h"
/**
*_memcpy fontion qui copie la mémoire area
*@dest where memory is stored
*@src: memory where is copied
*@n: nombre de byte
*
*return: copy la mémoire with n byte changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r=0;
	int i=n;

	for(r=0;r<i;r++)
	{
		dest[r]=src[r];
		n--;
	}
	return (dest);
}
