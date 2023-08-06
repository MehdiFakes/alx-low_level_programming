#include<stdio.h>
#include<stdlib.h>

/**
 * main - print sum of 2
 * @argc: num of cmd line arg.
 * @argv: pointer of cmd l arg.i
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
