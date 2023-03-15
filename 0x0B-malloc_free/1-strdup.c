#include"main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string on a new allocated memory
 * @str: string
 * Return: pointer to the duplicated string
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *p;
	int i;
	int r = 0;
/*if the given string is NULL*/
	if (str == NULL)
		return (NULL);
/* finding the length of the given string*/
	while (*(str + r))
		r++;
/*allocation the needed dynamic memory area */
	p = malloc(sizeof(char) * (r + 1));
/* to verify if the pointer , pointed on the allocated memory*/
/* area is not NULL */
	if (p == NULL)
		return (NULL);
/* initialization of i to avoid segment fault error*/
	i = 0;
/* filling the allocated area with the bytes from the given string */
	while (i <= r)
	{
		*(p + i) = *(str + i);
			i++;
	}
/* return a pointer to the string */
	return (p);
}

