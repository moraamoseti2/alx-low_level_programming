#include "main.h"
/**
 * _strcat - function to concate two strings
 * @dest : pointer to destinstion string
 * @src : pointer to source string
 * Return : pointer to destination string
*/
char *_strcat(char *dest, char *src)
{
	int len, j;

	len = 0;
	while (dets[len] != '\0')
	{
		len++;
	}
	for (j = 0; src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
