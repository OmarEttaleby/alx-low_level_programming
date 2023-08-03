#include "main.h"

/**
*_puts_recursion* il écrit un char suivi new line
*@s: points sur le string
*return empty or void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}


