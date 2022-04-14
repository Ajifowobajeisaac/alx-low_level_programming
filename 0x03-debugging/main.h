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

Int main(void)
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
#endif /* MAIN_H */
