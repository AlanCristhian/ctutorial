#include <stdio.h>

int main(void) {
    typedef char Array10[10];
    Array10 multi[5] = {
        {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
        {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'},
        {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'},
        {'9', '8', '7', '6', '5', '4', '3', '2', '1', '0'},
        {'J', 'I', 'H', 'G', 'F', 'E', 'D', 'C', 'B', 'A'}
    };
    Array10 *ptr;
    ptr = multi;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c ", *(*ptr + j + i*sizeof(Array10)));
        }
        printf("\n");
    }
    printf("length = %d\n", sizeof(multi)/sizeof(char));

    return 0;
}
