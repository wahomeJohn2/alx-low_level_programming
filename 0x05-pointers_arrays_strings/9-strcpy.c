#include "main.h"
#include <stddef.h>

/**
 * *_strcpy - function that stores char from src to dest
 * @dest: parameter
 * @src: parameter
 * Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULl)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}

