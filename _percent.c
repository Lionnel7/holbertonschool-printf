#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _percent(va_list args) {
    (void)args;
    _putchar('%');
    return 1;
}
