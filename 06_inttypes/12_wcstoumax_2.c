/* Second example of the wcstoumax() function from the inttypes.h library. */


#include <wchar.h>
#include <inttypes.h>


int main() {
  wchar_t str[] = L"123 10 555";
  wchar_t *pEnd;

  uintmax_t val1 = wcstoumax(str, &pEnd, 10);
  uintmax_t val2 = wcstoumax(pEnd, &pEnd, 10);
  uintmax_t val3 = wcstoumax(pEnd, &pEnd, 10);

  // Display the result
  wprintf(L"val1 = %" PRIuMAX L"\n", val1);
  wprintf(L"val2 = %" PRIuMAX L"\n", val2);
  wprintf(L"val3 = %" PRIuMAX L"\n", val3);

  return 0;
}
