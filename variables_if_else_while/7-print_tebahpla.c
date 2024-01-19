#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char startletter, endletter, letter;
startletter = 'a';
endletter = 'z';
for (letter = endletter; letter >= startletter; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}

