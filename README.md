 holbertonschool-printf

![Logo](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTob-PjCKECdAeaKJ2385YR9AKZhyGR30ngAw&s)


# PRINTF - Holberton School


### 📄 Description
**`_printf`** program is a simplified version of the standard printf function in C. It supports basic format specifiers like `%c`, `%s`, `%d`, `%i`, and `%%`, allowing formatted output to the standard output.

### 🪄 Compilation command

```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c```

### 🔐 Requierments

- Allowed editors: `vi, vim, emacs`

- All your files will be compiled on `Ubuntu 20.04 LTS` using [gcc](https://gcc.gnu.org/install/)

- Your code should use the [Betty style](https://github.com/hs-hq/Betty).

- No more than **5 functions** per file

- The prototypes of all your functions should be included in your header file called ```main.h```

- Note that we will not provide the `_putchar` function for this project

### 🔍 Exemple

`main.c :`
```
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;

    len = _printf("Good luck little student.\n");
    _printf("Len:[%i]\n", len);
    _printf("Int min:[%i]\n", -2147483648);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "HELLOOOOO !");
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    _printf("???:[%r]\n");
    return (0);
}
```

**Output :**
```
Good luck little student.
Len:[26]
Int min:[-2147483648]
Character:[H]
String:[HELLOOOOO !]
Percent:[%]
Len:[12]
???:[%r]
```

### 📑 Man page

Man commande : `man ./man_3_printf`.

![man _printf](https://i.ibb.co/B629g9x/Capture-d-cran-2024-11-28-171359.png)

### 🔖 Flowchart


![Flowchart](https://i.ibb.co/Hh9jGR3/Flowchart-Printf-1.png)
## Authors

- Github : [@SoliraZ](https://www.github.com/SoliraZ)
- Github : [@danish872](https://github.com/danish872)


