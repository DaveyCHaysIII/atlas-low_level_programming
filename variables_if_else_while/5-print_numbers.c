#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char start, end, num;
start = '0';
end = '9';
for (num = start; num <= end; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
