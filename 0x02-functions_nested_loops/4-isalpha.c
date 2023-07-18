#include "main.h"

/**
 * _isalpha - shows 1 if letter eslse 0
 *
 * @c: charactere ASCII code
 *
 * Return: 1 for letter else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90 ) || (c >= 97 && c < 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
