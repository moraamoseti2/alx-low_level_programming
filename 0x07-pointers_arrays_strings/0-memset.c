#include "main.h"
#include <stdio.h>
/**
 * _memset -> this memory set function
 * @s -> string
 * @b -> a character
 * @n -> an integet
 *return pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

