#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative or zero
 * Return 0
 */

int main(void)
{
    	int n;
		
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
                printf("%i is positve\n", n);
        else if (n < 0)
                printf("%i is negative\n", n);
        else
                printf("%i is zero\n", n);
        return (0);        
}

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}

#endif /* MAIN_H */
