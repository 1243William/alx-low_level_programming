#include "main.h"

/**
 * print_line - print line in the terminal
 * @n: the number of '-' characters to be printed as a line
 * Return: void
 */
void print_line(int n)
{
	int j;

	if (n > 0)
		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
