#include <stdio.h>
#include "main.h"
/**
 * main to print alphabet in lowercase
 * return 0 success
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	_putchar ('\n');
}
