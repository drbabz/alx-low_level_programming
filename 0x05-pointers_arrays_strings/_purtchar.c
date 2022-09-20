#include <unistd.h>

/**
 * -putchar - writes a character c stdout
 *  @c: the character to print 
 *
 *  Retur: on success 1
 *  on error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
