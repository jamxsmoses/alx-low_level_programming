#include <stdio.h>
/**
 * Description: main - entry point.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lc;
	char uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}

	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}

	putchar('\n');

	return (0);
}
