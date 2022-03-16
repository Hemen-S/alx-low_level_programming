#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /* betty style doc for function main goes there */ 
/**
 * main - Entry point
 * Description: to determine if a number is either positive or negative
 * Return: Always 0
 */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
                printf("%d is positive\n", n);

         if (n == 0)
                printf("%d is zero\n", n);

        if (n < 0)
                printf("%d is negative\n", n);
        return (0);
}
