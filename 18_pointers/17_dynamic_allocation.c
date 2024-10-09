#include <stdio.h>
#include <stdlib.h>

#define COLS 5

typedef int RowArray[COLS];
RowArray *rptr;

int main(void)
{
    int nrows = 10;
    int row, col;
    rptr = malloc(nrows*COLS*sizeof(int));

    for (row = 0; row < nrows; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            *(*(rptr + row) + col) = 17;
        }
    }

    for (row = 0; row < nrows; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            printf("%d ", *(*(rptr + row) + col));
        }
        printf("\n");
    }

    return 0;
}
