#include <stdio.h>
 /**
  * main - entry point
  *
  * Description: prints all lowercase and uppercase alphabets
  * Returns: Always 0
  */

int main(void)
{
	int i = 65;
	int m = 97;

	while (i < 91)
	{
		putchar(i);
		i++;
	}

	while (m < 123)
	{
		putchar(m);
		m++;
	}

	putchar(10);
	return (0);
}
