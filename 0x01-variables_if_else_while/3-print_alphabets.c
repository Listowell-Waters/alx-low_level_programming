#include <stdio.h>

/**
 * main - Entry point of function
 * description: this function prints all letters using putchar
 * Author: Listowell Appiah
 * Return: Always return 0 (Success)
*/

int main(void)
{
	int letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
