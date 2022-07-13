#include "main.h"
/**
 * Description-prints alphabet in lowercase
 * main: function to print lowercase alphabets using only _putchar
 * print_alphabet function as main
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
