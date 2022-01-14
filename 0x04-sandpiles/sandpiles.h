
#ifndef _SANDPILES_H_
#define _SANDPILES_H_

#include <stddef.h>
#include <stdio.h>


void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
int stable(int grid1[3][3]);
void do_stuff(int grid1[3][3], int grid2[3][3]);
void add_it(int grid1[3][3], int grid2[3][3]);
static void print_grid(int grid[3][3]);

#endif /* _SANDPILES_H_ */


