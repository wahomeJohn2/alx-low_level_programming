#include "main.h"

/**
 * _strlen - function to calc the length
 * @s: the parameter
 * Return: nothing
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return (count);
}

