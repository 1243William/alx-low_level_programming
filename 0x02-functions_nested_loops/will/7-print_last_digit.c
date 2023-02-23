#include "main.h"
/**
 *print_last_digit - returns last digit of n
 *
 *@n: - number to be operated on
 *
 *Return: last_digit of n (success)
 */
int print_last_digit(int n)
{	
	int m = n % 10;
	
	if (m < 0)
	{	_putchar((-m + '0');
		return (-m);
	}
	return (m);
}
