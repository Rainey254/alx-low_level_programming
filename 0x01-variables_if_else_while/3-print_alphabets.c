#include <stdio.h>

/**
 * main - printing alphabet
 *
 * Return: 0 on success
 */

int main(void)
{
	char ch, sh;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	sh = 'A';
	while (sh <= 'Z')
	{
		putchar(sh);
		sh++;
	}
	return (0);
}
