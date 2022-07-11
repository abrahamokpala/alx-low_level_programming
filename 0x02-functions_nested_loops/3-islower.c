#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: 1 or 0 depending on upper or lower case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
