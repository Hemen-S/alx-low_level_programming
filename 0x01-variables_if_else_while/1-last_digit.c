#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description:printing the last digit of n
 * Return: always 0
 */

int main(void)
{
	int n, end;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	end = n % 10;

	if (end > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, end);
	else if (end == 0)
		printf("The last digit of %d is %d and is 0\n", n, end);
	else (end < 6 && end != 0)
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, end);

	return (0);
}

