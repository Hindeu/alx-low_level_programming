#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 *        then in uppercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
		putchar(L);
	for (L = 'A'; L <= 'Z'; L++)
		putchar(L);
	putchar('\n');
	return (0);
}
