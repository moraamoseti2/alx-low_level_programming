#include "main.h"
/**
 * print_alphabet main: entry point
 * Description-alphabet in lowercase 
 * return : always 0 success
*/
void print_alphabet(void) /* print_alphabet function */
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar ('\n');
}
