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
	int t;

	t  = *a;
	*a = *b;
	*b = t;
}	
