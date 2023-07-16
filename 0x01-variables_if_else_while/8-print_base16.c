#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: putchar (Hexadicimal numbers)
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int number = 48; /*48: decimal of 0*/

	while (number <= 102) /*102: decimal f*/
	{
		putchar(number);

		/*after 9 jump till 96*/
		if (number == 57)
			number += 39;
		number++;
	}
	putchar('\n');

	return (0);
}
