#include "main.h"

/**
 *_pow_recursion - la fonction calcul la puissance d'un entier
 *@x: number
 *@y: power
 *Return: the number raised to the power
 */
int _pow_recursion(int x, int y)
{
	if (y > -1 && y <= 1 && y != 0)
		return (x);
	if (y == 0)
		return (1);
	if (y <= -1)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
