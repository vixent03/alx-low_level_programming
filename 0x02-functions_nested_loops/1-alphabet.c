#include "main.h"
#include <unistd.h>
/**
* print_alphabet - prints the alphabets in lower case
* Return: void
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar(10);
}
