#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function that checks for alphabetic chacacter
 * @c: char type letter
 * Return: return 0 0n success and 1 on fail
 */

int _isalpha(int c)
{

	int i = isalpha(c);



	if (i > 0)

				{

							return (1);
				}
			else
					{
						return (0);
					}
}
