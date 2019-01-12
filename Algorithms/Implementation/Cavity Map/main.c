#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char** cavityMap(int grid_size, char** grid)
{
    for(int i=0;i<grid_size;i++)
    {
        for(int j=0;j<grid_size;j++)
        {
        bool isCavity = (i>0 && i<grid_size-1) && (j>0 && j<grid_size-1) && ((grid[i][j]>grid[i-1][j]) && (grid[i][j]>grid[i+1][j])) && ((grid[i][j]>grid[i][j-1]) && (grid[i][j]>grid[i][j+1]));
            if(isCavity)
            {
                grid[i][j]='X';
            }
        }
    }

    return grid;
}

int main() {
    int n;
    // rows and COWS
    scanf("%i", &n);
    char** grid = malloc(sizeof(char*) * n);
    for (int grid_i = 0; grid_i < n; grid_i++) {
       // fill the matrix
        grid[grid_i] = (char *)malloc(10240 * sizeof(char));
       scanf("%s",grid[grid_i]);
    }
    char** result = cavityMap(n, grid);
    for(int result_i = 0; result_i < n; result_i++) {
        printf("%s\n", result[result_i]);
    }


    return 0;
}
