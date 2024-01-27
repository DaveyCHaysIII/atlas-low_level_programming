#include <stdio.h>
int _strlen(char *s)
{
int i=0;

while(s[i] != '\0')
{
	i++;
}
return (i);
}


int main(void)
{
char str[] = "Hello world!";
printf("%s is %d characters long\n", str, _strlen(str));
return (0);
}
