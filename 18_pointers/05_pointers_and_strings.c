#include <stdio.h>

char strA[79 + 1] = "A string to be used for demostration purposes";
char strB[79 + 1];

int main(void) {
    char *pA;       /* A pointer to type character */
    char *pB;       /* Another pointer to type character */
    puts(strA);     /* show string A */
    pA = strA;      /* Point pA to tring A */
    puts(pA);       /* show what pA is pointing to */
    pB = strB;      /* point pB at string B */
    putchar('\n');  /* move down one line on the screen */
    while (*pA != '\0') {
        *pB++ = *pA++;
    }
    *pB = '\0';
    puts(strB);
    return 0;
}
