#include <stdio.h>
/**
 * main -prints all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '0' + 9; i++)
	{
		for (j = i + 1; j <= '0' + 9; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
