#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - A program that print in uppercase, lowercase and new line;
 *
 *  Return: 0 on success
 */
int main(void)
{
int lowerCase = 'a';
int upperCase = 'A';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
while (upperCase <= 'z')
{
putchar(upperCase);
upperCase += 1;
}
putchar('\n');
return (0);
}
