#include "main.h"
/**
*The _memset() function fills the first n bytes of the memory area pointed
*@s: pointer
*@b: constant b ou la valeur voule
*@n: nombre de byte alloué
*
*return a pointer to the memory area s
*/
char *_memset(char *s,char b, unsigned int n)
{
	int i=0;

	for(i=0;n>0;i++)
	{
		s[i]=b;
		n--;
	}
	return (s);
}
