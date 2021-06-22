#include "holberton.h"
/**
 * _islower - checks for lower case letter
 * @c: lower case letters
 * Return: 1 if c, 0 if otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
