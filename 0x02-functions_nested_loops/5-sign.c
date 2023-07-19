#include "main.h"

/**
 * sign.c - Entry point
 *
 * @n: The input num as int
 *
 * Return: Always 0
 */

int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('97');
		return (1);
	}
	if (n == 0)
	{
		_putchar('97');
		return (0);
	}
	if (n < 0)
	{
		_putchar('97');
		return (-1);
	}
	_putchar('\n')
}
