#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void)
{

	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
