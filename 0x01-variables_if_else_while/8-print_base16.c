#include <stdio.h>
/**
 * main -prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '0' + 9; n++)
		putchar(n);
	for (n = 'a'; n < 'a' + 6; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
