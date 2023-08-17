#include "main.h"

/**
* more_numbers - Prints 0 - 14 ten times
* Return: No Return
*/
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
				_putchar(49);
			_putchar((b % 10) + 48);
		}
		_putchar(10);
	}
}
