#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main greatter or less than 0 
*
*Return always 0
*/
int main(void)
{
	int n;
	n=rand()-RAND_MAX/2;
	if (n>0)
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
