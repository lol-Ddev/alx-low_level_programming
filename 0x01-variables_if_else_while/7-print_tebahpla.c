#include <stdio.h>
/**
*main - entry point.
*
*Description: the purchar() function
*
*Return: Always 0 (Success)
*/

int main(void)

{
	char f = 'z';
	while (f >= 'a')
	{
		putchar(f);
		f--;
	}
	putchar('\n');

	return (0);
}
