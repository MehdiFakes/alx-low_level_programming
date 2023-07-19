#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: Takes int type input for fun
 *
 * Return: 1 if +, -1 if - else 0*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n <  0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
