#include <stdio.h>

/**
 * main - prints all number of base 16 in lower case
 * Return: 0 
 */
int main(void)
{
int i;

for (i = 48; i < 58; i++)
putchar(i);
for (i = 'a'; i <= 'f'; i++)
putchar(i);
putchar('\n');
return (0);
}
