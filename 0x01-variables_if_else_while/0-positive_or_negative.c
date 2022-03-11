#include <stdio.h>

/**
 * main - entry point
 * 
 * Description: to determine if a number is either positive or negative
 * Return: Always 0
 */

int main(void)
{
	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
       	
		printf(n, "%d is positive\n");
	
	else if (n = 0)
       	 
		printf(n, "%d is zero\n");
	
	else (n < 0)
       	
		printf(n, "%d is negative\n");
	

	return (0);
}
