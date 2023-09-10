#include <stdio.h>


/**
 * main - entry point of the program
 * Return: return 1
 */
int main(void)
{
	int i;

	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (1);
}

