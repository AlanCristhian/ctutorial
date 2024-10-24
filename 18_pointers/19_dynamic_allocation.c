#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nrows = 5;      /* both nrows and ncols could be evaluated */
    int ncols = 10;     /* or read in at run time. */
    int row;
    int **rowptr;
    rowptr = malloc(nrows*sizeof(int *));
    if (rowptr == NULL)
    {
        puts("Failure to allocate room for row pointers.\n");
        exit(0);
    }

<<<<<<< HEAD
    printf("\n\n\nIndex     Pointer(hex)    Pointer(dec)    Diff.(dec)");
=======
    printf("Index    Pointer(hex)          Pointer(dec)    Diff.(dec)");
>>>>>>> 1f4cd94 (Initial commit.)

    for (row = 0; row < nrows; row++)
    {
        rowptr[row] = malloc(ncols*sizeof(int));
        if (rowptr[row] == NULL)
        {
            printf("\nFailure to allocate for row[%d]\n", row);
            exit(0);
        }
<<<<<<< HEAD
        printf("\n%d        %p      %d", row, rowptr[row], rowptr[row]);
        if (row > 0)
            printf("        %d", (int)(rowptr[row] - rowptr[row - 1]));
    }
    printf("\n");
=======
        printf("\n%d        %p        %d", row, rowptr[row], rowptr[row]);
        if (row > 0)
            printf("      %d", (int)(rowptr[row] - rowptr[row - 1]));
    }
    printf("\n");

    for (row = 0; row < nrows; row++)
    {
        for (int col = 0; col < ncols; col++)
        {
            printf("%d ", rowptr[row][col]);
        }
        printf("\n");
    }

>>>>>>> 1f4cd94 (Initial commit.)
    return 0;
}
