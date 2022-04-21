#include "main.h"
#include <stdio.h>


/**
 * main - check code
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	n = 402;

	int *p = &n;

	*p = 98;
	return (0);
}
