#include <stdio.h>

/**
 * main - Combination of single digits
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
			if (num == 9)
				continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
