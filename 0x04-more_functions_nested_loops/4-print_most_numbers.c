#include "main.h"

/**
* print_most_numbers - prints 0 - 9 excluding 2 and 4
* Return: none
*/
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n == '2' || n == '4')
			continue;
		else
			_putchar(n);
	}
	_putchar(10);
}
