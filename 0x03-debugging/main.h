#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
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
