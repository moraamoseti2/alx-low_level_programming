#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
 * main function that prints lower case alphabet letters
 * return: 0 success
*/
int main(void)
{
	char ch=97;

	 for (ch=97; ch<=122; ch++)
	 {
		 putchar(ch);
	 }
	 putchar("\n");
	 return (0);
}
