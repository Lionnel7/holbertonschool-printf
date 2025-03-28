#include "main.h"

/**
 * _char - write the char c to stdout
 * @args: The char to print
 *
 * Return: Number of characters printed
 */
int _char(va_list args)
{
        char c = va_arg(args, int);

        return (_putchar(c));
}
