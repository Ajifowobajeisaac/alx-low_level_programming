#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints sum of multiplication.
 * @argc: counter to arguments.
 * @argv: pointer to arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
