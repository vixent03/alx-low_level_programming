#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0
*/
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	n = 97;
	while (n < 103)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
