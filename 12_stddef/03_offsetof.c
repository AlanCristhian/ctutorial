/* The offsetof macro from the <stddef.h> library expands to an integral
   constant expression of type size_t, the value of which is the offset, in
   bytes, between the specified member and the beginning of its structure. */


#include <stdio.h>
#include <stddef.h>


struct foo {
  char a;
  char b[10];
  char c;
};


int main(void) {
  printf("offsetof(struct foo, a) is %zu\n", offsetof(struct foo, a));
  printf("offsetof(struct foo, b) is %zu\n", offsetof(struct foo, b));
  printf("offsetof(struct foo, c) is %zu\n", offsetof(struct foo, c));
  return 0;
}
