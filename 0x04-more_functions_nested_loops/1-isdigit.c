#include "main.h"

/**
 * _isdigit- Detects digits
 * @c: Digit to b evaluated
 *
 * Return: Always 0 on success
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
