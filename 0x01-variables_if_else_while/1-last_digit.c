#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of function
 * description: Determines the sign of the units digit of a random number
 * Author: Listowell Appiah
 * Return: always 0 (Success)
*/

int main(void)
{
	int n;
	int d;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	printf("Last digit of %d is %d and is ", n, d);
	if (d > 0)
	{
		printf("greater than 5\n");
	}
	if (d < 0 && d != 0)
	{
		printf("less than 6 and not 0\n");
	}
	else if (d == 0)
	{
		printf("0\n");
	}
	return (0);
}
