#include "main.h"

/**
 * _puts- Prints strings
 * @str: String to be used
 */

void _puts(char *str)
{
	long p;

	p = 0;

	for ( ; str[p] != '\0'; p++)
		_putchar(str[p]);
	_putchar('\n');
}
