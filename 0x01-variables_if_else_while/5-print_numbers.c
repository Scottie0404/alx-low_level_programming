#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints all single digit numbers;
 *
 * Return: 0 on success
 */
int main(void)
{
int num;
while (num < 10)
{
printf("%d", num);
num += 1;
}
printf("\n");
return (0);
}
