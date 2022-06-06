#include <stdio.h>
/**
 * main - Printing size of various types
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	int n;
	float f;
	char c;
	long l;
	long long L;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(n));
	printf("Size of a long int: %zu byte(s)\n", sizeof(l));
	printf("Size of a long long int: 8 byte(s)\n", sizeof(L));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
return (0);
}
