#include <stdio.h>

void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
        putchar('\n');
}
else
{

for (i = size; i >= 1; i--)
{
        for (j = 1; j <= size; j++)
        {
                if (j < i)
                {
                        putchar(' ');
                }
                else
                {
                        putchar('#');
                }
        }
        putchar('\n');
}
}
}



int main(void)
{
print_triangle(0);
print_triangle(2);
print_triangle(4);
print_triangle(10);
return (0);
}
