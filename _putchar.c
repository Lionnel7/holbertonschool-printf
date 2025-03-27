#include "main.h"

/**
 * _putchar - write a single character to stdout
 * @c: the chararcter to write
 *
 * Return: 1 on succes, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
