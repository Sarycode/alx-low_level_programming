#include "main.h"
/**
 *print_alphabet_x10 - a function that prints x10 the alphabet in lowercase
 *Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}
