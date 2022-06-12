#include <stdio.h>
/**
 * main - find the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	int long np = 612852475143;

	while ((np % 2) == 0)
	{
		np = np / 2;
	}
	while ((np % 3) == 0)
	{
		np = np / 3;
	}
	while ((np % 5) == 0)
	{
		np = np / 5;
	}
	while ((np % 7) == 0)
	{
		np = np / 7;
	}
	while ((np % 9) == 0)
	{
		np = np / 9;
	}
	while ((np % 11) == 0)
	{
		np = np / 11;
	}
	printf("%ld\n", np);
	return (0);
}
