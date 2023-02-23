#include "main.h"
/**
 *_abs - returns absolute values
 *
 * @n: - number to be checked sign
 *
 * Return: n (positve), n*-1 (negative), 0 (zero)
 */
int _abs(int n)
{
		if (n > 0)
		{
			return (n);
		}
		else if (n < 0)
		{
			return (n * -1);
		}
		else
		{
			return (0);
		}
}
