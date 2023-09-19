#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 *
 * Return: On success 1.
 * One error, -1 is returned.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
