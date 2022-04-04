/* Second example of the wcstoimax() function from the inttypes.h library. */


#include <wchar.h>
#include <inttypes.h>


int main () {
  wchar_t str[] = L"123 10 -555";
  wchar_t *pEnd;

  intmax_t val1 = wcstoimax(str, &pEnd, 10);
  intmax_t val2 = wcstoimax(pEnd, &pEnd, 10);
  intmax_t val3 = wcstoimax(pEnd, &pEnd, 10);

  // Displaying the result
  wprintf(L"val1 = %" PRIdMAX L"\n", val1);
  wprintf(L"val2 = %" PRIdMAX L"\n", val2);
  wprintf(L"val3 = %" PRIdMAX L"\n", val3);

  return 0;
}
