#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
	int sign, lens1, lens2, i, output;

	i = 0;
	sign = 1;
	lens1 = 0;
	lens2 = 0;
	output = 0;
	while (s1[lens1] != '\0')
	{
		lens1++;
	}
	while (s2[lens2] != '\0')
	{
		lens2++;
	}
	if (lens2 > lens1)
	{
		sign = -1;
	}
	for (i = 0; i < lens1; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				output = ((s1[i] - s2[i]) * sign);
				i = lens1;
			}
			else
			{
				output =  ((s2[i] - s1[i]) * sign);
				i = lens1;
			}
		}
	}
	return(output);
}

int main(void)
{


char sa[] = "wdy!";
char sb[] = "Hoydy!";

char sc[] = "Heavy is the crown";
char sd[] = "Heavy is the fr";

char se[] = "Zebra";
char sf[] = "Yabba dabba doo";

printf("%d\n", _strcmp(sa, sb));
printf("%d\n", _strcmp(sc, sd));
printf("%d\n", _strcmp(se, sf));
printf("%d\n", _strcmp(se, se));

return (0);
}
