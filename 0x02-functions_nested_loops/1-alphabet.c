#include "main.h"
/**
 * print_alphabet function to print lowercase alphabets using only _putchar
 * return 0 success
*/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar ('\n');
}
