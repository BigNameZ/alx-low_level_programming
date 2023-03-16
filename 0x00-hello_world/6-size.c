#include <stdio.h>
/**
 * main - A program is used to print various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(v));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("size of a long long  int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
return (0);
}

