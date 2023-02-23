#include "main.h"
/**
*print_most_numbers - prints numbers 0 - 9
*excluding 2 and 4
*/
void print_most_numbers(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		if (number != 50 && number != 52)
		{
			_putchar(number + 0);
		}
	}
	_putchar('\n');
}

