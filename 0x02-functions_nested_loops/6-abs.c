#include "main.h"
/**
 *_abs - a function that computes the absolute value of an integer
 *@ab: inter input
 *Return: absolute value
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
