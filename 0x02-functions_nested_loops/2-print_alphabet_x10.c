#include "main.h"
/**
 *print_alphabet_x10 - a function that prints 10 times the alphabet, in lowercase
 *
 *Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	while (i < 11)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	i++;
	_putchar('\n');
	}
}
