/* The <stdio.h> rename() function is used to change the name of a file. The
   file is identified by character string pointed to by oldname. The new
   filename is identified by character string pointed to by newname. If newname
   already exists, the behavior of this function is implementation-defined. */


#include <stdio.h>


void main() {
  int result;
  char oldname[] = "test.txt";
  char newname[] = "test123.txt";

  // Trying to rename the file.
  result = rename(oldname, newname);

  // Displaying the message.
  if (result == 0)
    printf("File is successfully renamed.\n");
  else
    printf("Some error has occurred.\n");
}
