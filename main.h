#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct types - a types struct
 * @types: types of printing.
 * @f: fonction types.
 */

typedef struct types
{
	char types;
	int (*f)(va_list);
} types_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _char(va_list args);
int _string(va_list args);
int _integer(va_list args);
int _percent(va_list args);
int _format(const char type, va_list args);

#endif
