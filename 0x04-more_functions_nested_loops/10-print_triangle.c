#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int h, s;

	if (size >= 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (s = 1; s <= h; s++)
			{
				if ((h + s) < size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
