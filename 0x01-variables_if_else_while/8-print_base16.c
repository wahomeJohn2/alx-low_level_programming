#include <stdio.h>

/**
 * main - main function
 * Return: always something
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
		putchar(i + 48);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
		return (0);
}
