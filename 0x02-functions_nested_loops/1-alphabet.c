#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 *print_alphabet - prints a to z
 *return: void
 */

void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
