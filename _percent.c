#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int print_percent(va_list args) {
    (void)args;
    _putchar('%');
    return 1;
}
