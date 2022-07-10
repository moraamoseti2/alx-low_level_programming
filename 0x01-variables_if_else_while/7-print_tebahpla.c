#include <stdio.h>
/**
 * main - print lowercase letters in  reverse
 * return : 0 success
*/
int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
