/* Example of the setlocale() function from the locale.h library */


#include <stdio.h>
#include <time.h>
#include <locale.h>


int main() {
  time_t t = time(NULL);
  char buffer[80];

  printf("Local is: %s\n", setlocale(LC_ALL, "en_US.UTF-8"));

  struct lconv *lc = localeconv();

  printf("Local Currency Symbol: %s\n", lc->currency_symbol);

  strftime(buffer, 80, "%c", localtime(&t));
  printf("Date is: %s\n", buffer);

  return 0;
}
