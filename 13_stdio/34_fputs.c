/* The fputs() function writes every character of the null-terminated string
   pointed to by str to the output stream stream, until it reaches the
   terminating null character ('\0'). The terminating null-character is not
   copied to the stream. */


#include <stdio.h>


void main() {
  // Open the file in write mode
  FILE *pFile = fopen("test2.txt", "w");

  // Writes str in the file
  char str[50] = "Hello World!\n";
  fputs(str, pFile);


  // Close the file
  fclose(pFile);


  // Open the file in read mode to read the content of the file
  pFile = fopen("test2.txt", "r");
  int c = fgetc(pFile);
  while (c != EOF) {
    putchar(c);
    c = fgetc(pFile);
  }

  // Close the file
  fclose(pFile);
}
