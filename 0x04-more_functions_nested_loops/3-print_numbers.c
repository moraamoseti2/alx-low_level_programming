#include "main.h"
/**
*print_numbers - function that print all numbers from
*0 to 9
*
*Return: 0 success
*/
void print_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
