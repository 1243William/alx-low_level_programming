#include "main.h"
/**
 *_islower - checks for lowercase or not
 *
 * @c: - character to be checked
 *
 * Return: 1 (lowercase) , 0 (not lowercase)
 */
int _islower(int c)
{
	int j;

	for (j = 97; j < 123; j++)
	{
		if (j == c)
		{
			return (1);
		}
	}
	return (0);
}
