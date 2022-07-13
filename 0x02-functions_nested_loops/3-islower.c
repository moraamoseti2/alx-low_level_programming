#include "main.h"
/**
 * _islower:main function
 * description: to check if lowercase
 * return : 1 if int c is lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <='z')
		return (1);
	else
		return (0);
}
