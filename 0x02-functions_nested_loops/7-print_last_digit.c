#include "main.h"
#include <unistd.h>
/**
* print_last_digit - prints the last sigit of a number
* @n: the number to be evaluated
* Return: last digit of n
*/
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
	else
	{
		_putchar(48 - (n % 10));
		return (-(n % 10));
	}
}
