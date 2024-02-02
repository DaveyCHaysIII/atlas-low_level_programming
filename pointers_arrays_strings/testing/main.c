#include <stdio.h>

/**
 * print_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
        int tmp, i;

        n--;
        while (i <= n)
        {
                tmp = a[n];
                a[n] = a[i];
                a[i] = tmp;
                i++;
                n--;
        }
}


void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {234234, 64534, 77632, 8723451, 98987, 1345231, 98534597, 23456789, 6235456, 41235416, 374578, 10435434, 89734567, 89734567, 10435434, 374578, 41235416, 6235456, 23456789, 98534597, 1345231, 98987, 8723451, 77632, 64534, 234234};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
