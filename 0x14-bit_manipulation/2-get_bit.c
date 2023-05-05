#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Unsigned long int input.
 * @index: Index of the bit.
 *
 * Return: Value of the bit at index on success, -1 on failure.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if index is within bounds */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

