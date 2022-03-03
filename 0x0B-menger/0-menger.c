#include "menger.h"

/**
 * menger - object with holes
 * @level: int levels
 */
void menger(int level)
{
	int col, row, power;

	if (level < 0)
		return;
	
	power = pow(3, level);
	for (col = 0; col < power; col++)
	{
		for (row = 0; row < power; row++)
			putchar(fate(col, row));
		putchar(10);
	}
}

/**
 * fate - yes or no
 * @col: int
 * @row: int
 * Return: char
 */
char fate(int col, int row)
{
	while (col && row)
	{
		if (col % 3 == 1 && row % 3 == 1)
			return (' ');
		col /= 3, row /= 3;
	}
	return ('#');
}
