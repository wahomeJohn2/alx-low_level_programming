#include "main.h"

/**
 *_abs - prints the  absolute number of an integer
 *
 *@a: parameter to print
 *
 *Return: always 0
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else
		a = a;
	return (a);

}

