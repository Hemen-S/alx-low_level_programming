#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all lowercase aphabet except q and e
 * Return: Always 0
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
			i++;
	}
	putchar(10);
	return (0);
}
