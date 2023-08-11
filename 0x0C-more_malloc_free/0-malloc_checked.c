#include "main.h"

/**
 * *malloc_checked utilise malloc to allocate memory
 * @b: int 
 * return: pointer if m initialized or Null if not
 */
void *malloc_checked(unsigned int b)

{
	int *m = malloc(b);

	if ( m == 0 )
		exit(98);
	return (m);
}
