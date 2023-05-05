#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * @n: Unsigned long int input.
 * @m: Unsigned long int input.
 *
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		if (diff & 1)
		{
			count++;
		}
		diff >>= 1;
	}

	return (count);
}
