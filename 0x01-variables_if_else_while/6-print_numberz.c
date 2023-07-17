#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print all single digit of
 *        base 10 starting from 0,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n % 10);
	putchar('\n');
	return (0);
}
