#include <stdio.h>

/**
 * main - main function
 * Return: always something
 */

int main(void)
{

	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
		return (0);
}

