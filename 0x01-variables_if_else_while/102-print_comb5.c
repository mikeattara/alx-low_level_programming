#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, x, y;
	i = 48;
	j = 48;
	x = 48;
	y = 49;

	while (i < 58)
	{
		while (j < 58)
		{
			while (k < 58)
			{
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(x);
					putchar(y);
					if (i != 57 && j != 56 && x != 57 && y != 57)
					{
						putchar(',');
						putchar(' ');
					}
					y++;
				}
				x++;
				y = 48;
			}
			j++;
			x = 48;
		}
		i++;
		j = 48;
	}
	putchar('\n');
	return (0);
}
