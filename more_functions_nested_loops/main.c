// main.c
#include "main.h"
#include <stdio.h>

/**
 * main - test the mul function
 *
 * Return: Always 0.
 */
int main(void)
{
    int result;

    result = mul(3, 4);
    printf("3 * 4 = %d\n", result);  // Expected output: 3 * 4 = 12

    result = mul(-2, 6);
    printf("-2 * 6 = %d\n", result); // Expected output: -2 * 6 = -12

    return 0;
}


