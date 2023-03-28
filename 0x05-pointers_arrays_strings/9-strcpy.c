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
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
