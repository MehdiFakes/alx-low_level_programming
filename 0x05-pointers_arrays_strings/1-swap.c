#include "main.h"

/**
 * swap_int - swap values of two int
 * @a: st pointer
 * @b: snd pointer
*/

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
