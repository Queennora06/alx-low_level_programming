#include "main.h"

/**
* rev_string - reverses a string
*@s: input string
*Return: string in reverse
*/
Void rev_string(char *s)
{
long i = 0;
	char first, last;
	long size, half;

	for ( ; s[i] != '\0'; )
		i++;
	size = i - 1;
	half = size / 2;
	while (half >= 0)
	{
		first = s[size - half];
		last = s[half];
		s[half] = first;
		s[size - half] = last;
		half--;
	}
}
