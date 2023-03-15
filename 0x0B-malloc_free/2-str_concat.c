#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/* calculate the length of string 1*/
	while (*(s1 + size1))
		size1++;
/* calculate the length of the string 2 */
	while (*(s2 + size2))
		size2++;
/* a pointer pointed to the memory area allocation*/
	p = malloc((size1 + size2) + 1);

	if (p == NULL)
		return (NULL);
	i = 0;
/* copying the first string on the allocated memory*/
	while (i < size1)
	{
		*(p + i) = *(s1 + i);
			i++;
	}
/* copying the second string */
	j = 0;
	while (j <= size2)
	{
		*(p + j + size1) = *(s2 + j);
			j++;
	}
/* the program return a pointer pointed */
	return (p);
}
