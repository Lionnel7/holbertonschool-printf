#include "main.h"

/*
 * _printf - function that print characters
 * @format: Character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, p_chars = 0;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			if (format[i] == 'c')
				p_chars += _char(args);
			else if (format[i] == 's')
				p_chars += _string(args);
			else if (format[i] == 'd' || format[i] == 'i')
				p_chars += _integer(args);
			else if (format[i] == '%')
				p_chars += _putchar('%');
			else
			{
				_putchar('%');
				_putchar(format[i]);
				p_chars += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			p_chars++;
		}
		i++;
	}

	va_end(args);

	return (p_chars);
}
