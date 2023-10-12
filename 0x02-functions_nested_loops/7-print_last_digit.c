#include "main.h"
/**
 * print_last_digit - Prints the last four digits of an integer
 * @n: The number to be checked
 * Return: The value of the last digit of a number)
 */
int print_last_digit(int n)
{
	int lastdg;

	lastdg = n % 10;

	if (lastdg < 0)
	{
		lastdg = lastdg * -1;
	}
	_putchar(lastdg + '0');
	return (lastdg);
}
