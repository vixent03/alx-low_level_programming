#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0
*/
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n != 101)
		{
			if (n != 113)
				putchar(n);
		}
		n++;
	}
	putchar(10);
	return (0);
}
