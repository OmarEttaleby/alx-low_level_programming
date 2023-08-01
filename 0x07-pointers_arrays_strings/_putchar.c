#include "main.h"
#include <unistd.h>
/**
* _putchar une fonction pour écrire un seul caractère en C
*@c écrit le output ou le charactère ou le le premier caractère d'un mot
*
*return 1 si la compilation s'est réalisée
*return -1 si la compilation ne se réalise pas
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
