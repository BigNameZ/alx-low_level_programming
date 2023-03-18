#include <stdio.h>
/**
 * main - prints the lower case alphabet in reverse other
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
