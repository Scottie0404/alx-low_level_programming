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
	*a = 10;
	*b = 20;
	swap_int(&*a, &*b);

	return (0);
}
