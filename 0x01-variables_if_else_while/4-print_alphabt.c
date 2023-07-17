#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 *        except q and e,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
	{
		if (L != 'e' && L != 'q')
			putchar(L);
	}
	putchar('\n');
	return (0);
}
