/* Example of the wcstoimax() function from the inttypes.h library.

   The wcstoimax() function is used to interpret an integer value of the
   specified base in a wide string pointed to by str. */


#include <wchar.h>
#include <inttypes.h>


int main() {
  wchar_t str1[] = L"123";
  wchar_t str2[] = L"10.55";
  wchar_t str3[] = L"100 some words";
  wchar_t str4[] = L"some words 555";

  wchar_t *end;

  intmax_t num1 = wcstoimax(str1, &end, 10);
  intmax_t num2 = wcstoimax(str2, &end, 10);
  intmax_t num3 = wcstoimax(str3, &end, 10);
  intmax_t num4 = wcstoimax(str4, NULL, 10);

  // Displaying the result
  wprintf(L"wcstoimax(\"%ls\") = %" PRIdMAX L"\n", str1, num1);
  wprintf(L"wcstoimax(\"%ls\") = %" PRIdMAX L"\n", str2, num2);
  wprintf(L"wcstoimax(\"%ls\") = %" PRIdMAX L"\n", str3, num3);
  wprintf(L"wcstoimax(\"%ls\") = %" PRIdMAX L"\n", str4, num4);

  return 0;
}
