/* The SIG_ERR macro from the <signal.h> library is a value of type
   void(*)(int). When returned by signal(), it indicates that an error has
   occurred. */


#include <signal.h>
#include <stdio.h>
#include <stdlib.h>


void signalHandler(int signal) {
  printf("Received signal %d\n", signal);
}


int main(void) {

  // Installing an signal handler
  if (signal(SIGTERM, signalHandler) == SIG_ERR) {
    printf("Error while installing a signal handler.\n");
    exit(EXIT_FAILURE);
  }

  printf("Sending signal %d\n", SIGTERM);

  if (raise(SIGTERM) != 0) {
    printf("Error while raising the SIGTERM signal.\n");
    exit(EXIT_FAILURE);
  }

  printf("Exit main()\n");
  return EXIT_SUCCESS;
}
