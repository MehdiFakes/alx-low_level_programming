#include "main.h"

/**
 * print_square - print square
 * @size: size of square
 * Return: #
*/

void print_square(int size)
{
	int row, sq;
	
	for (row = 1; row <= size; row++)
	{
		for (sq = 1; sq <= size; sq++)
			_putchar(35);
		_putchar('\n');
	}
}
