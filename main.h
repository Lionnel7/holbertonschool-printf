#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _char(va_list args);
int _string(va_list args);
int _integer(va_list args);
int print_percent(va_list args)

#endif
