#include "main.h"

/**
 * get_endianness - Returns 0 if big endian, 1 if little endian.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
	{
		/* Little endian */
		return (1);
	}
	else
	{
		/* Big endian */
		return (0);
	}
}
