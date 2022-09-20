#include "main.h"

/**
 * print_rev - to print string reversed, followed by a new line.
 * @s: the string to print reversed.
 *
 * Returned: no return.
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
