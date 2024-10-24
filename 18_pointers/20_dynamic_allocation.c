#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **rptr;
    int *aptr;
    int *testptr;
    int k;
<<<<<<< HEAD
    int nrows = 5;      /* Both nrows and ncols could be evaluated */
=======
    int nrows = 5;      /* Both nrows and ncols could be evalueted */
>>>>>>> 1f4cd94 (Initial commit.)
    int ncols = 8;      /* or read in at run time */
    int row, col;

    /* we now allocate the memory for the array */

    aptr = malloc(nrows*ncols*sizeof(int));
    if (aptr == NULL)
    {
<<<<<<< HEAD
        puts("\nFailure to allocate room for the array.\n");
=======
        puts("\nFailure to allocate room for the array");
>>>>>>> 1f4cd94 (Initial commit.)
        exit(0);
    }

    /* next we allocate room for the pointers to the rows */

    rptr = malloc(nrows*sizeof(int *));
    if (rptr == NULL)
    {
<<<<<<< HEAD
        puts("\nFailure to allocate room for pointers.\n");
=======
        puts("\nFailure to allocte room for pointers.");
>>>>>>> 1f4cd94 (Initial commit.)
        exit(0);
    }

    /* and now we 'point' the pointers */
<<<<<<< HEAD

    for (k = 0; k < nrows; k++)
    {
        rptr[k] = aptr + (k * ncols);
    }

    /* Now we illustrate how the row pointers are incremented */

    printf("\n\nIllustrating how row pointers are incremented\n");
    printf("\n\nIndex   Pointer(hex)    Diff.(dec)\n");
=======
    for (k = 0; k < nrows; k++)
    {
        rptr[k] = aptr + (k*ncols);
    }

    /* Now we illustrate how the row pinters are incremented */
    printf("\nIllustrate how the row pinters are incremented.");
    printf("\nIndex     Pointer(hex)    Diff.(dec)");
>>>>>>> 1f4cd94 (Initial commit.)

    for (row = 0; row < nrows; row++)
    {
        printf("\n%d        %p", row, rptr[row]);
        if (row > 0)
<<<<<<< HEAD
            printf("        %d", (rptr[row] - rptr[row-1]));
    }

    printf("\n\nAnd now we print out the array\n");
    for (row = 0; row < nrows; row++)
    {
        for (col = 0; col < ncols; col ++)
=======
            printf("                %d", (rptr[row] - rptr[row - 1]));
    }
    printf("\n\nAnd now we print out the array\n");
    for (row = 0; row < nrows; row++)
    {
        for (col = 0; col < ncols; col++)
>>>>>>> 1f4cd94 (Initial commit.)
        {
            rptr[row][col] = row + col;
            printf("%d ", rptr[row][col]);
        }
        putchar('\n');
    }

    puts("\n");

<<<<<<< HEAD
    /* and here we illustrate that we are, in fact, dealing with a 2
    dimensional array in a contiguous block of memory. */
=======
    /* and here we illustrate that we are, in fact, dealing with
       a 2 dimensional array in a contiguous block of memory. */
    printf("And now we demostrate that they are contiguous in memory\n");
>>>>>>> 1f4cd94 (Initial commit.)

    testptr = aptr;
    for (row = 0; row < nrows; row++)
    {
<<<<<<< HEAD
        for (col = 0; col < ncols; col ++)
=======
        for (col = 0; col < ncols; col++)
>>>>>>> 1f4cd94 (Initial commit.)
        {
            printf("%d ", *(testptr++));
        }
        putchar('\n');
    }

    return 0;
}
<<<<<<< HEAD
=======

>>>>>>> 1f4cd94 (Initial commit.)
