#include <stdio.h>
#include "main.h"
/**
 * main to print alphabet in lowercase
 * return 0 success
*/
int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	return (0);
}
