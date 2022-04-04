/* Example of some macros defined in the <locale.h> library. */


#include <stdio.h>
#include <time.h>
#include <locale.h>


int main() {
  time_t t = time(NULL);
  char buffer[80];

  printf("Local is: %\n", setlocale(LC_ALL, "C"));

  // Monetary formatting will be US
  setlocale(LC_MONETARY, "en_US.UTF-8");
  struct lconv *lc = localeconv();

  printf("Local Currency Symbol: %s\n", lc->currency_symbol);

  // Time formatting will be environment's default locale
  setlocale(LC_TIME, "");
  strftime(buffer, 80, "%c", localtime(&t));
  printf("Date is: %s\n", buffer);

  return 0;
}
