#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - chakes if uppercase
 *
 * @c: intiger of function
 *
 * Return: return value
 *
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
