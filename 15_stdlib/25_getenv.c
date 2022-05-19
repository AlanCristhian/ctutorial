/* The getenv() unction returns a c-string containing the value of the
   environment variable whose name is specified as argument. If the requested
   variable is not found, the function returns a null pointer. */


#include <stdio.h>
#include <stdlib.h>


void main() {
  char* env_p;
  env_p = getenv("PATH");

  if (env_p != NULL)
    printf("The path is: %s", env_p);
}
