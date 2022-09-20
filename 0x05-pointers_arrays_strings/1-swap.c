#include "main.h"

/**
 * swap_int - swaps the value stored in a and b
 * @a: first value to swap for b
 * @b: second value to swap for a
 * Return: returns void on success
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *b;
	*b = *a;
	*a = d;
}
