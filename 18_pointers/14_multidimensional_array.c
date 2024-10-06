#include <stdio.h>

#define ROWS 5
#define COLS 10

int multi[ROWS][COLS];

void set_value(int m_array[][COLS])
{
    int row, col;
    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            m_array[row][col] = 1;
        }
    }
}

void print_values(int m_array[ROWS][COLS])
{
    int row, col;
    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col < COLS; col++)
        {
            printf("%d ", m_array[row][col]);
        }
        printf("\n");
    }
}

int main(void)
{
    set_value(multi);
    print_values(multi);
    return 0;
}
