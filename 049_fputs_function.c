// fputs function example.


#include <stdio.h>


int main() {
  FILE *fileAddress;
  fileAddress = fopen("sample.txt", "w");
  char name[50];

  if (fileAddress != NULL) {
    printf("\nPlease enter the string that you want to write to the file:\n");
    gets(name);

    // Let us use our fputs
    fputs(name, fileAddress);
    printf("\nWe have written the name successfully.\n");
    fclose(fileAddress);
  } else {
    printf("\nUnable to create or open the sample.txt file.");
  }

  return 0;
}
