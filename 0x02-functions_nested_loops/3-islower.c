#include "main.h"

/**
 * _islower - Shows 1 else shows 0
 *
 *@c: the charactere in ASCII code
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

