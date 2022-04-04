/* Example of the localeconv() function from the locale.h library. */


#include <stdio.h>
#include <locale.h>


int main() {
  setlocale(LC_MONETARY, "en_US.UTF-8");
  struct lconv *lc = localeconv();

  printf("Local Currency Symbol: %s\n", lc->currency_symbol);
  printf("International Currency Symbol: %s\n", lc->int_curr_symbol);

  return 0;
}
