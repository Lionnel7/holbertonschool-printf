#include "main.h"
#include <stdarg.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, length = 0;
	va_list args;
	char *str;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				length += _putchar(va_arg(args, int));
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				str = str ? str : "(null)";
				while (*str)
					length += _putchar(*str++);
			}
			else
				length += _putchar(format[i] == '%' ? '%' : format[i - 1]), _putchar(format[i]);
		}
		else
			length += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (length);
}
