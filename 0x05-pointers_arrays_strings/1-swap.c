#include "main.h"

/**
 * swap_int - funtion to swap
 * @a: value 1
 * @b: value 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
