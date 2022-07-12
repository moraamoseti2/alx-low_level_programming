#include <stdio.h>
#include "main.h"
/**
 * print_alphabet function to print lowerrcase alphabets
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
