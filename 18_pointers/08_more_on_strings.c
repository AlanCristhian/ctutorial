#include <stdio.h>

char *my_strcpy_0(char dest[], char source[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *my_strcpy_1(char dest[], char source[])
{
    int i = 0;
    while (*(source + i) != '\0')
    {
        *(dest + i ) = *(source + i);
        i++;
    }
    *(dest + i) = '\0';
    return dest;
}

char *my_strcpy_2(char dest[], char source[])
{
    int i = 0;
    while (*(i + source) != '\0')
    {
        *(i + dest) = *(i + source);
        i++;
    }
    *(i + dest) = '\0';
    return dest;
}

int main(void) {
    char string_0[4 + 1] = "Alan";
    char string_1[4 + 1] = "bbbb";
    char string_2[4 + 1] = "cccc";
    char string_3[4 + 1] = "dddd";

    printf("ORIGINAL:------\n");
    printf("string_0 = %s\n", string_0);
    printf("string_1 = %s\n", string_1);
    printf("string_2 = %s\n", string_2);
    printf("string_3 = %s\n", string_3);

    printf("COPY:----------\n");
    my_strcpy_0(string_1, string_0);
    printf("string_1 = %s\n", string_1);
    my_strcpy_1(string_2, string_0);
    printf("string_2 = %s\n", string_2);
    my_strcpy_2(string_3, string_0);
    printf("string_3 = %s\n", string_3);

    return 0;
}
