#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints alphabet in lower case;
 *
 * Return: 0 on success
 */
int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
putchar('\n');
return (0);
}
