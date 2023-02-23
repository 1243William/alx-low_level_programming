#include "main.h"
/**
 *print_alphabet_x10 - prints alphabets 10x
 */
void print_alphabet_x10(void)
{
	char alphabet;

	int counter = 0;

	while (counter < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);


		}
		_putchar('\n');
		counter++;
	}
}
