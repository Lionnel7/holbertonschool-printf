#include "main.h"

/**
 * _integer - Function that prints an integer
 * @args: List of arguments
 *
 * Return: The number of characters printed
 */
int _integer(va_list args)
{
	int count = 0;
	int number = va_arg(args, int);
	unsigned int num;
	char buffer[12];
	int i = 0;

	if (number < 0)
	{
		count += _putchar('-');
		num = -number;
	}
	else
	{
		num = number;
	}

	do {
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	} while (num > 0);

	while (i--)
	{
		count += _putchar(buffer[i]);
	}

	return (count);
}

