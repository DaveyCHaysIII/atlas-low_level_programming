#include "main.h"

/**
 * print_alphabet_x10 - runs print_alphabet 10x times
 *
 * Return: void ()
 */

void print_alphabet_x10(void)
{
int j;
for (j = 0; j < 10; j++)
        {
        char  i;

        for (i = 'a'; i <= 'z'; i++)
                {
                putchar(i);
                }
                putchar('\n');
        }
}
