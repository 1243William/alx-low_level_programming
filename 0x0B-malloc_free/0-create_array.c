#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: unsigned int passed
 * @c: specific char
 * Return: a pointer or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}

	i = (char *) malloc(size * sizeof(c));

	if (i == 0)
	{
		return (NULL);
	}

	else
	{
		j = 0;
		while (j < size)
		{
			*(i + j) = c;
			j++;
		}
		return (i);
	}
}
