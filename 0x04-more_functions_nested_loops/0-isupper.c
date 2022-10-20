#include "main.h"
/**
 *_isupper - a function that checks for uppercase character
 *@c: character input
 *Return: Returns 1 if c is uppercase and Returns 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}
}
