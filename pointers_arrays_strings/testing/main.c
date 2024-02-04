#include <stdio.h>

void print_diagsums(int *a, int size)
{
        int n, i, suma, sumb;

        suma = 0;
        sumb = 0;
        n = size - 1;
        for (i = 0; n >= 0; i++)
        {
                suma = suma + a[size * i + i];
                sumb = sumb + a[size * i + n];
                n--;
        }
        printf("%d, %d", suma, sumb);
}

int main()
{
	int a[3][3] = {
		{1, 2, 3},
		{9, 10, 11},
		{15, 14, 13},
	};

	print_diagsums((int *)a, 3);
	return (0);
}

