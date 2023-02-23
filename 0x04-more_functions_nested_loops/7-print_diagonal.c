#include "main.h"

/**
 * print_diagonal - prints backward slacsha as a diagonal
 * @n: the number of times the backward slash is printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < i; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
