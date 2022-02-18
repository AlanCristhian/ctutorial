// fgetc function example


#include <stdio.h>


int main() {
  FILE *fileAddress;
  fileAddress = fopen("sample.txt", "r");
  char ch;

  if (fileAddress != NULL) {

    // Check whether it is the last character or not
    while (!feof(fileAddress)) {
      ch = fgetc(fileAddress);

      printf("\nCharacter we are reading from the file = %c\n", ch);
    }
    fclose(fileAddress);
  } else {
    printf("\nUnable to create or open the sample.txt file.");
  }

  return 0;
}
