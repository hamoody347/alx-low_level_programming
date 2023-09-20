#include "main.h"

/**
 * print_array - prints n elemts of arr type int
 *
 * @n: elements param
 * @a: string param
 *
 * Description: This is a desc
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
