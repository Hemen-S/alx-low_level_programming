#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: all alphabets printed
 * Return: Always 0
 */

int main(void)
{
	int i = 97;
	int m = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (m < 91)
	{
		putchar(m);
		m++;
	}
	putchar(10);

	return (0);
}

