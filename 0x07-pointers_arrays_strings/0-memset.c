#include "main.h"
/**
 * char *_memset function
 *return pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int q;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

