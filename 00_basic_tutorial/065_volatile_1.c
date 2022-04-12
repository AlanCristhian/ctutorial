/* First example of the volatile keyword. Here the compiler ignore the else
   part. */


#include <stdio.h>


int a = 0;


int main(void) {
  if (a == 0) {
    printf("a = 0\n");
  } else {
    printf("a != 0\n");
  }
  return 0;
}
