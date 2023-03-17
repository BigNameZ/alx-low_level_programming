#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * This program will determine if a number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
}
