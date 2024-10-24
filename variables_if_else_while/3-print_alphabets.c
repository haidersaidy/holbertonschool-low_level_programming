#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
for (a = 'A'; a <= 'Z'; a++)
{putchar(a); }
putchar ('\n');
return (0);
}
