#include "main.h"

/**
 *_isalpha - checks the alphabet
 *@c: paramater to be printed
 *Return: always something
 */

int _isalpha(int c)
{
	if (c >= 64 && c <= 122)
		return (1);
	else
		return (0);
}

