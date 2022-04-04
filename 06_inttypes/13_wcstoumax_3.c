/* Third example of the wcstoumax function from the inttypes.h library */


#include <wchar.h>
#include <inttypes.h>


int main() {
  wchar_t str[] = L"11011 55 123 ff 0xff";
  wchar_t *pEnd;

  uintmax_t val1 = wcstoumax(str, &pEnd, 2);
  uintmax_t val2 = wcstoumax(pEnd, &pEnd, 8);
  uintmax_t val3 = wcstoumax(pEnd, &pEnd, 10);
  uintmax_t val4 = wcstoumax(pEnd, &pEnd, 16);
  uintmax_t val5 = wcstoumax(pEnd, &pEnd, 0);

  // Displaying the result
  wprintf(L"val1 = %" PRIuMAX L"\n", val1);
  wprintf(L"val2 = %" PRIuMAX L"\n", val2);
  wprintf(L"val3 = %" PRIuMAX L"\n", val3);
  wprintf(L"val4 = %" PRIuMAX L"\n", val4);
  wprintf(L"val5 = %" PRIuMAX L"\n", val5);

  return 0;
}
