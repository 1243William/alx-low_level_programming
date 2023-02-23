#include "main.h"
/**
*_isdigit - checks whether a character
*passed to it is is a digit or not
*character.
*
*@c : character to be checked
*
*Return: 1 (digit), 0 (not digit)
*/
int _isdigit(int c)
{
	int ascii;

	for (ascii = 48; ascii <= 57; ascii++)
	{
		if (c == ascii)
		{
			return (1);
		}
	}
	return (0);
}
