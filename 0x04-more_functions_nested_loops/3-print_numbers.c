#include "main.h"

/**
 * print_numbers - prints 0 to 9 with new line
 * only use _putchar
 * Description: use _putchar twice and print values 0-9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
