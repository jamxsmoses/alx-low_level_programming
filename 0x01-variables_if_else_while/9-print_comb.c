#include <stdio.h>
#include <stdio.h>
/**
 * Description: main - entry point.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	while (x < 10)
	{
		putchar('0' + x);
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
