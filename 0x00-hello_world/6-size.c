#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	char a,
	int b;
	long int d;
	long long int e;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
