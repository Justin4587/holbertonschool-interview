#include "sandpiles.h"

/**
* sandpiles_sum - 3 is the max
*
* @grid1: int
* @grid2: Pointer to the root of the tree to delete
* Return: pointer to node
*/
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
    add_it(grid1, grid2);

    while(stable(grid1) != 1)
    {
        print_grid(grid1);
        do_stuff(grid1, grid2);
    }

}

/**
* stable - 3 is the max
*
* @grid1: int
* Return: 1 if stable
*/
int stable(int grid1[3][3])
{
    int i, j;

    for(i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (grid1[i][j] >= 4)
                return (0);
    return (1);
}

/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */
static void print_grid(int grid[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid[i][j]);
        }
        printf("\n");
    }
}

/**
 * add_it - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */
void add_it(int grid1[3][3], int grid2[3][3])
{
    int i, j;

    for(i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            grid1[i][j] += grid2[i][j];

    for(i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            grid2[i][j] = 0;
    print_grid(grid2);
}

/**
 * do_stuff - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */
void do_stuff(int grid1[3][3], int grid2[3][3])
{
    int i, j;

    for(i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (grid1[i][j] > 3)
            {
                if (j > 0)
                    grid2[i][j - 1] += 1;
                if (j < 2)
                    grid2[i][j + 1] += 1;
                if (i > 0)
                    grid2[i - 1][j] += 1;
                if (i < 2)
                    grid2[i + 1][j] += 1;
                grid1[i][j] -= 4;
            }
    add_it(grid1, grid2);
}
