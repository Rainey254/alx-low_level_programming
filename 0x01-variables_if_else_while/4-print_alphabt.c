#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: 0 on success
 */

int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
