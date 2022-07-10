#include <stdio.h>
/**
 * main function to print numbers base 16
 * return 0: success
*/
int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'F' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
