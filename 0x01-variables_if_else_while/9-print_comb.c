#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print all possible combinations
 *        of single digit numbers,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	if (n == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
