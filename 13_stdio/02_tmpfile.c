/* The <stdio.h> tmpfile() function creates and opens a temporary file with a
   filename guaranteed to be different from any other existing file. The file
   is opened as a binary file for update (as by fopen() function with access
   mode "wb+"). */


#include <stdio.h>


void main() {
  char str[100] = "Hello World!.";
  char myString[100];

  // Creating a temporary file.
  FILE * tFile = tmpfile();

  // Display message if file is not created.
  if (tFile == NULL) {
    puts("Unable to create temporary file.");
    return;
  }

  // Display message when the file is created.
  puts("Temporary file is created.");

  // Sets the file pointer at the begining of the stream.
  rewind(tFile);

  // Display the content of the file.
  fgets(myString, 100, tFile);
  printf("It contains: %s\n", myString);

  // Close the file.
  fclose(tFile);
}
