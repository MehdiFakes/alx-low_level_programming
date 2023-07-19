#include <main.h>

/**
 * _abs - entry point
 *
 * @i: always positive
 *
 * Return: Always 0
*/

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
