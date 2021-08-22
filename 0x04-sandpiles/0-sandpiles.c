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
    int i, j;

    for(i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            grid1[i][j] += grid2[i][j];

    if((i = stable(grid1)) != 1)
        printf("nope");
    else
        printf("ya");
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
            if (grid1[i][j] <= 3)
                return (1);
    return (0);
}
