#include "main.h"
/**
*_isupper - checks whether a character
*passed to it is lowercase or uppercase
*character.
*
*@c : character to be checked
*
*Return: 1 (uppercase), 0 (lowercase)
*/
int _isupper(int c)
{

	int alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		if (c == alphabet)
		{
			return (0);
		}
	}
	return (1);
}
