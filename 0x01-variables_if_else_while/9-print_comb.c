#include <stdio.h>
#include <stdio.h>
/**
 * Description: main - entry point.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 9)
		{
			putchar(x + '0');
		}
		else
		{
			putchar(x + '0');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
