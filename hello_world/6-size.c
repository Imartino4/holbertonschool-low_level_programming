#include <stdio.h>
/**
 * main - printing size of various types
 *
 * Return - Always 0
 */
int main(void)
{
	int n;
	float f;
	char c;
	long l;

	printf("Size of a char: %zu byte(s)\n", sizeof(f));
	printf("Size of an int: %zu byte(s)\n", sizeof(n));
	printf("Size of a long inr: %zu byte(s)\n", sizeof(l));
	printf("Size of a long long int: 8 byte(s)\n");
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
return (0);
}
