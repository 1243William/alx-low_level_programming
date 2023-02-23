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
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
