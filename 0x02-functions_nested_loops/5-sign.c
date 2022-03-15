#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n - is an ascii character
 *
 * Return: 1 if postive, 0 if 0 and -1 if negative
 */

int print_sign(int n)
{

	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
