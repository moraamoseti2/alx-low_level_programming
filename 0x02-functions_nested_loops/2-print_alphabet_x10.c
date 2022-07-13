#include "main.h"
/**
 * main: check the code
 * description: print alphabet 10times
 * return : always 0
*/
int main(void)
{
	int n, c;

	while (c < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		c++;
		_putchar('\n');
	}
	return (0);
}
