#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	char ch;

	int a = 0;

	while (a < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		a++;
	}
}
