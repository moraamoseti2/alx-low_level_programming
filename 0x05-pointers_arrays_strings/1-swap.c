#include "main.h"
/**
 * void swap_int(int *a, int *b) to swap 2 integers
 * return 0:success
*/
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
