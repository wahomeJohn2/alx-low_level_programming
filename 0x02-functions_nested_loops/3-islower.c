#include "main.h"

/**
 *_islower - checks lowercase char
 *@c: parameter to be printed
 *Return: someting
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

