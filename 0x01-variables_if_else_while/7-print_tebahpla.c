#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print a-z
 *
 * Return: Always 0 Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'z')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
