#include "main.h"
/**
 * Description-print_alphabet function in lowercase
 * main: function to print lowercase alphabets using only _putchar
 * return 0 success
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
