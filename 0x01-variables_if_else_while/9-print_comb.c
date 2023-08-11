#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '0' + 9; n++)
	{
		putchar(n);
		if (n == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

