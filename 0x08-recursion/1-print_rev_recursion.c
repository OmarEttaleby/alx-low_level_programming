#include "main.h"

/**
*_print_rev_recursion - affiche  string dans sens différe
*@s: string that we need to print in reverse
*Return: no return
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
