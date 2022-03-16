#include "stdio.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long init total_sum, sum, first, second;

	total_sum = 0;
	sum = 0;
	first = 0;
	second = 1;

	while (sum < 4000000)
	{
		sum = first + second; 
		if (sum % 2 == 0)
		{
			total_sum += sum;
		}
		first = second;
		secomd = sum;
	}

	printf("%li\n", total_sum);

	return (0);
}
