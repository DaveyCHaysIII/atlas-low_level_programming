#include <stdio.h>

void print_square(int size)
{
if (size <= 0)
        {
        putchar('\n');
        }
else
        {
        int i, j;

        for (i = 0; i < size; i++)
        {
                for (j = 0; j < size; j++)
                {
                        putchar('#');
                }
        putchar('\n');
        }
        }
}

int main()
{

print_square(0);
print_square(2);
print_square(-2);
print_square(10);

return (0);
}
