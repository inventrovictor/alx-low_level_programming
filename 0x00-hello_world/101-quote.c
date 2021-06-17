#include <stdio.h>
#include <unistd.h>
/**
 * main - outputs to string
 *
 * Description: prints out "and that piece of art is useful..." without printf
 *
 *Return: 1
 */
int main(void)
{
  write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
