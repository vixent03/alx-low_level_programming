#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index.
 * @n: pointer to the int.
 * @index: index of the bit.
 * Return: 1 if success, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = (*n | i);
	return (1);
}
