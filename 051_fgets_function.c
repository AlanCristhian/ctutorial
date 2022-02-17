// fgets function example



#include <stdio.h>


int main() {
  FILE *fileAddress;
  fileAddress = fopen("sample.txt", "r");
  char data[50];

  if (fileAddress != NULL) {

    // Check whether it is the last character or not
    while (!feof(fileAddress)) {
      fgets(data, 50, fileAddress);
      printf("\nString we are reading from the file = %s\n", data);
    }
    fclose(fileAddress);
  } else {
    printf("\nUnable to create or open the sample.txt file.\n");
  }

  return 0;
}
