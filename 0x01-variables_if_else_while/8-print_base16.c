#include <stdio.h>

/**
  * main - print all the numbers of base 16 in lowercase
  * Return: 0
  */

int main(void)
{
	int a;
	char ch;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
