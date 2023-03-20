#include <stdio.h>

/**
 * main - main function
 * Return: always something
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'Z'; i++)
		if (i != 'q' &&  i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
