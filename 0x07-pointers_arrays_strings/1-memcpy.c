#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int i=0;
		while(i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}

	return (dest);
}
