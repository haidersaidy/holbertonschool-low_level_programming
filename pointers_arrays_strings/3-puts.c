#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: pointer to the string
 */
void _puts(char *str)
{
while (*str)
{
putchar(*str);
str++;
}
putchar('\n');
}
