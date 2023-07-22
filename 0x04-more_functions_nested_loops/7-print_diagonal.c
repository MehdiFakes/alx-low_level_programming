#include "main.h"

/**
 * print_diagonal - print \
 *
 * @n: is number of linesthe \ should be printed
 *
 * Return: dagona
*/

void print_diagonal(int n)
{
	int len, spc;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (spc = 0; spc < len; spc++)
				_putchar(' ');
			_putchar(92);

			if (len == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
