#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int num;
	char nb;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (nb = 'a'; nb <= 'f'; nb++)
		putchar(nb);

	putchar('\n');

	return (0);
}
