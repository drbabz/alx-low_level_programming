#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this s where the program start running
 *
 * Return: return zero if no error and non zero if error
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (1 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	}
	return (0);
}
