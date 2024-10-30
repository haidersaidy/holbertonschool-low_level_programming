#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}