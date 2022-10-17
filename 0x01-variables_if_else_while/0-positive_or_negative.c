#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function determines if a function is positive, negative or zero
 *
 * Return: Always return 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n > 0)
	{
		printf("is positive");
	}
	if (n < 0)
	{
		printf("is negative");
	}
	else
	{
		printf("is zero");
	}
	return (0);
}
