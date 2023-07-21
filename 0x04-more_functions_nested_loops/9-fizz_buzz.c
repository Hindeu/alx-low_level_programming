#include "main.h"
#include <stdio.h>
/**
  * main - Prints a Fizz Buzz program
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (x % 3 == 0)
		{
			_putchar('F');
                        _putchar('i');
                        _putchar('z');
                        _putchar('z');
		}
		else if (x % 5 == 0)
		{
			_putchar('B');
                        _putchar('u');
                        _putchar('z');
                        _putchar('z');
		}
		else
		{
			_putchar(x + '0');
		}

		if (x != 100)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
