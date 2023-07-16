#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 10 numbers starting from 0
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		printf("%i", a);
		a++;
	}
	printf("\n");

	return (0);
}
