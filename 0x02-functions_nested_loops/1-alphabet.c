#include "main.h"

/**
 * main - prints lowercase alphabet
 * Return: 0
 */

void main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
