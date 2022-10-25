#include "main.h"

/**
* swap_int - Entry point of function
* Author: Listowell Appiah
* @a: first int
* @b: second int
* Return: 0
*/
void swap_int(int *a, int *b)
{
		int s;

		s = *a;
		*a = *b;
		*b = s;
		return (0);
}
