#include "holberton.h"
/**
 * _isalpha - checks for an upper case or lower case letter
 * @c: checks for alphabetic characters
 * Return: 1 if c, 0 for everything else
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
