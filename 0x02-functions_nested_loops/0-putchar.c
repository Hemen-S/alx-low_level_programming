
#include "main.h"

/**
 * main - entry point
 *
 * Description - write a program that prints putchar
 * Return: Always 0
 */

int main(void)
{
	char text[8] = "-putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	putchar('\n');

	return (0);
}
