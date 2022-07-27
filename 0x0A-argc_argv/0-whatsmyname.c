#include <stdio.h>
/**
 * main - Write a program that prints its name, followed by new line
 * if you rename the program it will print the new name without having to
 * compile it again
 * you should not remove the path before the name of the program
 *
 * @argc  :this is the argument count
 * @argv : this is the argument vector
 *
 * return  :0 success
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
