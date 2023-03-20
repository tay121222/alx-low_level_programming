#include<stdio.h>

/**
 * main - Program Start
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
int n = 0;

while (n < 16)
{
if (n < 10)
{
putchar('0' + n);
}
else
{
putchar('a' + (n - 10));
}
n++;
}
putchar('\n');

return (0);
}
