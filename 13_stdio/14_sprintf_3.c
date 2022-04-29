/* Third example of the <stdio.h> sprintf() function. */


#include <stdio.h>


void main() {
  char x[] = "catfish";
  const char* y = "many catfishes";
  char buffer[100];

  sprintf(buffer, "[%s]\n", x);
  printf("1. %s", buffer);
  sprintf(buffer, "[%10s]\n", x);
  printf("2. %s", buffer);
  sprintf(buffer, "[%*s]\n", 10, x);
  printf("3. %s", buffer);
  sprintf(buffer, "[%-10s]\n", x);
  printf("4. %s", buffer);
  sprintf(buffer, "[%-*s]\n", 10, x);
  printf("5. %s", buffer);
  sprintf(buffer, "[%10.8s]\n", y);
  printf("6. %s", buffer);
  sprintf(buffer, "[%-10.8s]\n", y);
  printf("7. %s", buffer);
  sprintf(buffer, "[%-*.*s]\n", 10, 8, y);
  printf("8. %s", buffer);
}
