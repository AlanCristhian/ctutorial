/* Third example of the wcstoimax() function from the inttypes.h library. */


#include <wchar.h>
#include <inttypes.h>


int main() {
  wchar_t str[] = L"11011 55 -123 ff 0xff";
  wchar_t *pEnd;

  intmax_t val1 = wcstoimax(str, &pEnd, 2);
  intmax_t val2 = wcstoimax(pEnd, &pEnd, 8);
  intmax_t val3 = wcstoimax(pEnd, &pEnd, 10);
  intmax_t val4 = wcstoimax(pEnd, &pEnd, 16);
  intmax_t val5 = wcstoimax(pEnd, &pEnd, 0);

  // Display the results
  wprintf(L"val1 = %" PRIdMAX L"\n", val1);
  wprintf(L"val2 = %" PRIdMAX L"\n", val2);
  wprintf(L"val3 = %" PRIdMAX L"\n", val3);
  wprintf(L"val4 = %" PRIdMAX L"\n", val4);
  wprintf(L"val5 = %" PRIdMAX L"\n", val5);

  return 0;
}
