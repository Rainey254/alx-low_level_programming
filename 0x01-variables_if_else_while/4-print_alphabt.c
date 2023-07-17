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
		putchar(ch);
			if (ch == 'q' || ch == 'e')
				ch++;
				continue;
		ch++;
	}
	putchar('\n');
	return (0);
}
