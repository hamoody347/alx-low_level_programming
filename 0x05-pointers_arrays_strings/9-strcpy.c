#include "main.h"

/**
 * *_strcpy - copies the string point to by src
 *
 * @dest: char string
 * @src: char string
 *
 * Description: Copy string pointed to by pointers
 *
 * Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0';)

	return (dest);
}
