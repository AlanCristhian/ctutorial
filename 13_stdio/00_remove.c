/* The <stdio.h> remove() function is used to delete the file identified by
   character string pointed to by fname. If the file is currently open by the
   current or another process, the behavior of this function is implementation
   defined. Return 0 if file is successfully deleted, otherwise non-zero value
   is returned. */


#include <stdio.h>


void main() {
  int result;
  char fname[] = "test.txt";

  // Trying to delete the file
  result = remove(fname);

  // Display the message
  if (result == 0)
    printf("File is successfully deleted.\n");
  else
    printf("Some error has occurred.\n");
}
