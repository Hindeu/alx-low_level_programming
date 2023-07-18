#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print all numbers of base
 *        16 in lowercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char l;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
