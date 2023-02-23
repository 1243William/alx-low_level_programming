#include "main.h"
/**
 *_isalpha - checks for alphabets
 *
 * @c: - character to be checked
 *
 * Return: 1 (alphabet) , 0 (not lowercase)
 */
int _isalpha(int c)
{
	int letter;

	for (letter = 65; letter <= 122; letter++)
	{
		if (letter == c)
		{
			return (1);
		}
	}
	return (0);
}
