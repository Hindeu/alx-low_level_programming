#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }
        /*This loop is an infinite loop cause
	 * i will remain inferior to 10 as long as
	 * it is not incremented
	 */
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
