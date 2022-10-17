#include <stdio.h>

/**
 * main - This function prints an alphabet in lowercase using putchar
 * Author: Listowell Appiah
 * Return: Always return 0(Success)
*/

int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
