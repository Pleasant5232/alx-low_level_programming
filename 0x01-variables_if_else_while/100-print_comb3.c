#include <stdio.h>

/**
 * main - print single digit numbers starting from 0
 *
 * Return: returns zero at the end
 */
int main(void)

{
	int, j;


	for (i = 0; i <= 9; i++)

	{
		for (j = 1; j <= 9; i++)

		{

			if (j > i)

			{
				putchar(i + '0');

				putchar(i + '0');
				
				if (i != 8)
				
				{

					putchar(',');

					putchar(' ');

				}

			}

		}

	}

	putchar('\n');

	return (0);

}

