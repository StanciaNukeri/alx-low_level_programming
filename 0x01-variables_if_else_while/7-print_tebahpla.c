#include <stdio.h>

/**
 * main - prints all alphabet in reverse
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char rv;

	for (rv = 'z'; rv >= 'a'; rv--)
		putchar(rv);

	putchar('\n');

	return (0);
}
