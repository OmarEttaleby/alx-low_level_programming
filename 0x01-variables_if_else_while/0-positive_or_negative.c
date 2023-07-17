#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* header 
*betty style
*/
int main(void)
{
	int n;
	n = rand()-RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n",n);
	}
	else if (n == 0)
	{
		printf("%d is positive\n",n);
	}
	else
	{
		printf("%d is negative\n",n);
	}
	return (0);
}
