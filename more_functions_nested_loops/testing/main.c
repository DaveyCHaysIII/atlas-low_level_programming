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
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}

int main()
{
print_line(2);
print_line(3);
print_line(4);
print_line(5);
print_line(-2);
print_line(14);
return (0);
}
