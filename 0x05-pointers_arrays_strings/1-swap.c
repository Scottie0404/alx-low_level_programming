#include <stdio.h>
#include "main.h"

/**
 * swap_int - Updates the value of the parameter to 98
 * @a: The value
 * @b: The value
 * Return: none
 */

void swap_int(int *a, int *b)
{
	a = 98;
    	b = 42;
    	putchar("a=%d, b=%d\n", a, b);
    	swap_int(&a, &b);
    	putchar("a=%d, b=%d\n", a, b);
}
