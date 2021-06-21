#include <stdio.h>
/**
 * main - program that prints all the combinations of two two-digit numbers
 * numbers should range between 0 and 99
 * numbers should be seperated by , followed by space
 * all numbers should be printed as two digits, 1 as 01
 * Return: 0
 */

int main(void)
{
int n1 = 48;
int a = 0;
int b;
int com = 44;

while (a <= 99)
{
b = a + 1;
while (b <= 99)
{
putchar((a / 10) + n1);
putchar((a % 10) + n1);
putchar(32);
putchar((b / 10) + n1);
putchar((b % 10) + n1);
if (a != 98 || b != 99)
{
putchar(com);
putchar(32);
}
b += 1;
}
a += 1;
}
putchar('\n');
return (0);
}
