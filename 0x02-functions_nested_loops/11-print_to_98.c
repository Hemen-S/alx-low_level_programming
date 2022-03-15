#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: is an integer
 * Return: 0
 */

void print_to_98(int n)
{
	for (n=0; n < 99; n++)
	{
		puts("%d, \n", n);
	}
	return (n);
}

