#include "main.h"

/**
 *factorial - calcul factorial d'un integer
 *@n: number integer
 *Return: the factorial of a number
 */

int factorial(int n)
{
	if (n >= 0 && n <= 1)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
