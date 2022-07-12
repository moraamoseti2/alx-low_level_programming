#include <stdio.h>
#include "main.h"
/**
 * main - Entry point.
 * Description: write a program that prints "_putchar" followed by a new line.
 * Return: Always 0 (Success.)
 */
int main(void)
{
	char ch;
	char sample[] = "putchar";
	int i = 0;
	
	for(ch=95;ch<=122;ch++){
	    if(ch==95){
	        putchar(ch);
	    }
	    
	

	while (sample[i] != '\0')
	{
		putchar(sample[i]);
		i++;
	}
	}
	putchar('\n');
	return (0);
}
