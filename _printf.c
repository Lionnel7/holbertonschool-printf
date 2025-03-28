#include "main.h"

/**
 * _printf - Function that print characters.
 * @format: character string.
 *
 * Return: the number of characters printed.
 */

int	_printf(const char *format, ...)
{
	int	i;
	int	length;
	va_list args;

	va_start(args, format);

	i = 0;
	length = 0;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			length += _format(format[i + 1], args);
			i++;
		}
		else
		{
			_putchar(format[i]);
			length++;
		}
		i++;
	}
	va_end(args);
	return (length);
}
