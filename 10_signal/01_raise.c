/* The raise function from the <signal.h> library send signal sig to the
   current executing program. The signal handler, specified using signal(), is
   invoked. */


#include <signal.h>
#include <stdio.h>


volatile sig_atomic_t gSignalStatus = 0;


void signalHandler(int signal) {
  gSignalStatus = signal;
}


int main(void) {

  // Installing a signal handler.
  signal(SIGTERM, signalHandler);

  printf("Signal value: %d\n", gSignalStatus);
  printf("Sending signal %d\n", SIGTERM);
  raise(SIGTERM);
  printf("Signal value: %d\n", gSignalStatus);
  printf("Exit main()\n");

  return 0;
}
