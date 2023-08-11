#include "main.h"

/**
 * flip_bits - returns the number of bits you flip to go from an int to another
 * @n: int one.
 * @m: int two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nubits;

	for (nubits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nubits++;
	}
	return (nubits);
}

