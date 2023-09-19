#include "main.h"

/**
 * _strlen - return the lenth of a string
 *
 * @s: string parameter input
 *
 * Return: Length of string
*/

int _strlen(char *s)
{
	int couter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
