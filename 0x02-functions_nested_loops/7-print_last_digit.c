#include "main.h"

/**
 *print_last_digit - prints the last digit
 *
 *@n: parameter
 *Return: always 0
 */

int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (n < 0)
		d = -d;
	_putchar(d + '0');
	return (d);

}

