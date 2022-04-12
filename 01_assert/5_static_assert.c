/* Example of the static_assert() function from the <assert.h> library. */


#include <assert.h>


int main(void) {

  // Test if math works.
  static_assert(2 + 2 == 4, "Whoa dude!");  // or _Static_assert(...

  _Static_assert(sizeof(int) < sizeof(char),
                 "This program requires that int is less than char");

  return 0;
}
