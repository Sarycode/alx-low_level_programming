#include "main.h"
/**
 *_isdigit - a function that checks for uppercase character
 *@c: integer input
 *Return: Returns 1 if c is a digit and Returns 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
