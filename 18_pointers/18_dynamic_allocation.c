#include <stdio.h>
#include <stdlib.h>

#define COLS 5


int main(void)
{
    int nrows = 10;
    int row, col;
    int (*xarray)[COLS];
    xarray = malloc(nrows*COLS*sizeof(int));

    for (row = 0; row < nrows; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            xarray[row][col] = 18;
        }
    }

    for (row = 0; row < nrows; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            printf("%d ", *(*(xarray + row) + col));
        }
        printf("\n");
    }

    return 0;
}
