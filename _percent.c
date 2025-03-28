#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _percent - Prints a percent sign.
 * @args: Arguments list (unused).
 *
 * Return: 1 (number of characters printed).
 */
int _percent(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}
