#include <stdio.h>

/**
 * main - Etry point
 *
 * Description: print alphabet in lower case
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a -z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
