#include <stdio.h>

#define length 5

void int_copy(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *destination++ = *source++;
    }
}

void print_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *array++);
    }
    printf("\n");
}

int main(void) {
    int array_1[length] = {3, 4, 5, 1, 2};
    int array_2[length] = {5, 3, 1, 8, 0};
    print_array(array_1, length);
    print_array(array_2, length);
    int_copy(array_1, array_2, length);
    print_array(array_2, length);
    return 0;
}
