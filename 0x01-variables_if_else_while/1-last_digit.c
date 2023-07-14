#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * description : a code that shows last digit
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit > 5)
		print("and is greater than 5")
	else if (digit == 0)
		print("and is 0");
	else if (digit < 6 && digit != 0)
		print ("and is less than 6 and not 0");
	return (0);
}
