#include <stdio.h>
/**
 * main -prints all possible different combinations of three digits.
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '0' + 7; i++)
	{
		for (j = i + 1; j <= '0' + 8; j++)
		{
			for (k = j + 1; k <= '0' + 9; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
