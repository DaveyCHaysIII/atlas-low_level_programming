#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char startletter, endletter, letter, startupper, endupper, letterupper;
startletter = 'a';
endletter = 'z';
startupper = 'A';
endupper = 'Z';
for (letter = startletter; letter <= endletter; letter++)
{
putchar(letter);
}
for (letterupper = startupper; letterupper <= endupper; letterupper++)
{
putchar(letterupper);
}
putchar('\n');
return (0);
}

