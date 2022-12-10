#include <stdio.h>

/**
 * main - prints the alphabet in lowcercase,
 * and print a new line
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
