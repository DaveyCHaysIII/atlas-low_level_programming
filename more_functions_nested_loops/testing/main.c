#include <stdio.h>

void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
int i;
for (i = 0; i <= n; i++)
{
putchar('_');
}
putchar('\n');
}
}

int main()
{
print_line(2);
print_line(7);
print_line(0);
print_line(-2);
print_line(14);
return (0);
}
