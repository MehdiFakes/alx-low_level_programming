#include "main.h"

/**
 * more_numbers - 10* from 0 to 14
 *
 * Return: numberes
 */

void more_numbers(void)
{
	int i, j, k;

	for (j = 49; j <= 59; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			i = k;
			if (k > 9)
			{
				_putchar(1 + 48);
				i = k % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
