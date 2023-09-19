#include "main.h"

/**
 * _puts - preints a string
 *
 * @str: string param to print
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
