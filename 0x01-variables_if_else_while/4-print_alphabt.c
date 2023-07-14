#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints in lowercase followed by a new line;
 *
 * Return: 0 on success
 */
int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
if (lowerCase == 'e' || lowerCase == 'q')
{
lowerCase += 1;
}
else
{
putchar(lowerCase);
lowerCase += 1;
}
}
putchar('\n');
return (0);
}
