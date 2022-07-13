#include "main.h"
/**
 * main: check the code
 * description: print alphabet 10times
 * return : always 0
*/
void print_alphabet_x10(void)
{
	int n, c;
	c = 0;

	while (c < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		c++;
		_putchar('\n');
	}
}
