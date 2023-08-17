#include "main.h"
/**
* print_line - prints underscores
* @n: how many underscorea to print
* Return: No return
*/

void print_line(int n)
{
	int m;

	for (m = 1; m <= n; m++)
	{
		_putchar('_');
	}
	_putchar(10);
}
