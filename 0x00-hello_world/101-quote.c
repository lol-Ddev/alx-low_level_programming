#include <stdio.h>

/*
 *
 *  * main - prints to string
 *
 *  *
 *
 *  * Description: Prints "and that piece of art is useful..." without puts
 *
 *  *
 *
 *  * Return: 1
 *
 */

/**
 * main - prints exactly two lines of codes this phrase followed by new line
 *
 */

int main(void)

{

	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	long l = 59;

	long fd = 1;

	long syscall = 1;

	long ret = 0;

	__asm__ ("syscall"

			: "=a" (ret)

			: "a" (syscall),

			"D" (fd),

			"S" (s),

			"d" (l));

	return (1);

}
