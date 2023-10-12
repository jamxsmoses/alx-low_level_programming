#include "main.h"
/**
 * print_sign - checks for sign of a number
 * @n: The number to be checked
 * Return: 1 if positive number and -1 if o or anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
