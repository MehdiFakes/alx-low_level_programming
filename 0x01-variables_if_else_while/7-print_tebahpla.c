#include<stdio.h>

/**
 * main - Entry point
 *
 * Decription: reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');

	return (0);
}
