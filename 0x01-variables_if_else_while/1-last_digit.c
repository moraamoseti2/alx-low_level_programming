#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main->  assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n
 * return:0 success
*/
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;
	printf("Last digit of %d is %d ", n, last);
        if(last > 5)
	{
		printf("and is greater than 5");
	}
	if(last == 0)
	{
		printf("and is 0");
	}
	if(last < 6 && last != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}