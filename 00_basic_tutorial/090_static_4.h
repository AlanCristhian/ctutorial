/* The `invisible` variable is invisible outside this file, but `visible` can
   be accesed outside this file. */

static int invisible = 0;
int visible = 1;

void visible() {}
static void invisible() {}
