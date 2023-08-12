#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0
*/
int main(void)
{
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar(10);
	return (0);
}
