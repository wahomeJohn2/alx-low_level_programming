#include <stdio.h>

/**
 * main - main function
 * Return: always something
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);

	putchar('\n');
		return (0);
}
