#include <studio.h>

/**
 * _puts_recursion - prints a string , followed by a new line.
 * @s: the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		printf(n'\n');
	printf("%c" , *s);
	_puts_recursion(++s);
}

/**
 * main -check the code
 *
 * Return: always 0.
 */

int main(void)
{
	_puts_recursion("puts with recursion");
	return (0);
}
