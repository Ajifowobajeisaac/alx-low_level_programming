#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
		{
			printf("0\n");
		}
	}
	
