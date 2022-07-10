#include <stdio.h>

/**
 * main function to print alphabets in lowercase and uppercase followed by new line
 * return:0 success
*/
int main(void)
{
	char ch;
	
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0)
}
