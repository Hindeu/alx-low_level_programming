#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the alphabet in reverse
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
