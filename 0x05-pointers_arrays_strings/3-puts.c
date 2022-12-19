#include "main.h"

/**
  * _puts - print string
  * @str: string
  * Return: void
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\n')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
