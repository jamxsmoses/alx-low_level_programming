#include <stdio.h>
/**
 * Description: main - entry point.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}

	for (b = 'a'; b < 'g'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
