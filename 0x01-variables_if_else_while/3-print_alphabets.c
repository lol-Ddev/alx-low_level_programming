#include <stdio.h>
/**
*main - entry point.
*
*Description: codes highlights
*
* Return: Always 0.
*/
int main(void)
/*Description: for function putchar*/
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
	putchar(b);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}
