#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0;
*/

int main(void)
{
	int m = 97;
	int n = 65;

	while (m < 123)
	{
		putchar(m);
		m++;
	}
	while (n < 91)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
