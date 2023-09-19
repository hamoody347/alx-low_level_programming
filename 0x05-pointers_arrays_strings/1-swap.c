#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 *
 * @a: input param 1
 * @b: input param 2
 *
 * Return: Nothing
*/

int swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
