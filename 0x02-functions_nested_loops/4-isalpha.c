#include "main.h"
/**
 *_isalpha - a function that checks for lowercase character
 *@c: single letter
 *Return: Return: 1 if int c is lowercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
