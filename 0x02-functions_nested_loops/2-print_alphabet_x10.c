#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times then a new line
 */

void print_alphabet_x10(void)
{
	int n;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
