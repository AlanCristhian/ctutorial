/* Inside a function, variables defined as static extends their scope for
   multiple function calls and once declared cannot loose its scope thill the
   end of the program execution finishes. */


#include <stdio.h>


void run() {
  static int running = 0;
  ++running;
  printf("The function \"run\" was called %d time.\n", running);
}


void main() {
  run();
  run();
  run();
}
