#include "main.h"

/**
 * _isdigit: check if c is in range: 0-9
 *
 * @c: is number
 *
 * Return: 1 if number
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
