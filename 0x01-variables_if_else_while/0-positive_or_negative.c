#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-ssing a random number to a varible n each time itis executed
 * return:0 if success
*/
int main(void)
{
        int n;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        if (n < 0)
        {
                printf("%d is negative\n", n);
        }
        return (0);
}


