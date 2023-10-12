#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: Character to be checked
 * Return: 1 if alphabetic character or 0 for any other thing
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
