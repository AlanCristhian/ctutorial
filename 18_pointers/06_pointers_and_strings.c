#include <stdio.h>

char strA[79 + 1] = "A string to be used for demostration purposes";
char strB[79 + 1];

char *my_strcpy(char *destination, const char *source) {
    char *p = destination;
    while (*source != '\0')
    {
        *p++ = *source++;
    }
    *p = '\0';
    return destination;
}

int main(void)
{
    my_strcpy(strB, strA);
    puts(strB);
    return 0;
}
