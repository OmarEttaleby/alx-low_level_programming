#include "main.h"
#include <unistd.h>
**
*a lot of documentation about putchar
*writes a single character to the standard output stream, stdout. Its prototype is as follows: int putchar (int character) The character to be printed is fed into the function as an argument, and if the writing is successful, the argument character is returned.
*return no empty
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
