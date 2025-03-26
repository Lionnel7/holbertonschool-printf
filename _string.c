#include "main.h"
 /**
  * _string - write the string to stdout 
  * @args: The string to print 
  *
  * Return: Number of characters printed 
  */
int _string(va_list args)
{
        char *str = va_arg(args, char *);
        int count = 0;

        if (!str)	
	        str = "(null)";

        while (*str)	
	{
		_putchar(*str++);
		count++;
	}
        return (count);
}	
