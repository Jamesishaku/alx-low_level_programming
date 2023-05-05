#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Unsigned long int input.
 * @index: Index of the bit to set to 0.
 *
 * Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is within bounds */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Set the bit at the specified index to 0 */
	*n = (*n) & ~(1UL << index);

	return (1);
}
