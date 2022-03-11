#include <stdio.h>
/**
 * main - entry point 
 *
 * Descrption: prints all alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	char lower;
	 putchar("Lowercase alphabet: \n"); 

	for (lower = 'a'; lower <= 'z'; lower++)
	{ 
		
	putchar("%c", lower);
	}
	
	return (0);
}

