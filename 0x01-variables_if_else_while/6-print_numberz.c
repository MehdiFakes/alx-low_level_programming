#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: You can only use the putchar function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		/*this code converts a to ASCII represantation*/
		putchar(a + '0');
		a++;
	}
	putchar('\n');

	return (0);
}
