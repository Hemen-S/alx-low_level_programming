#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: is an integer
 *
 * Return: void
 */

int print_last_digit(int n)
{
	int poli = n % 10; 
	if (n < 0)
		poli = poli * -1;

	_putchar('0' + poli);

	return (poli);
}
