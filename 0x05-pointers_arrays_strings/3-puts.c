#include "main.h"
/**
 *_puts -  print astring, followed by anew line, stdout;
 *@str: string to print
 *
 */
void  _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str++);
	}
		_putchar('\n');
}
