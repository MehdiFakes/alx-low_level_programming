#include "main.h"

/**
 * _isupper - chech if c is upper
 *
 * @c: is alphabet char
 *
 * Return: 1 if upper else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
