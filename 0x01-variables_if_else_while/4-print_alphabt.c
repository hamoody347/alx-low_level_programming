#include <stdio.h>

/**
 * main - Etry point
 *
 * Description: print all alphabet
 *
 * Return: Alwayz 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
