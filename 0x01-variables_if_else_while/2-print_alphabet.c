#include <stdio.h>
#include <stdlib.h>

/** 
 * main function that prints lower case alphabet letters
 * return: 0 success
*/
int main(void)
{
	char a= "a";
	
        while(a<='z')	
	{
		 putchar(a);
		 a++;
	 }
	 putchar("\n");
	 return (0);
}
