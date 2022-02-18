/* fputc function example */


#include <stdio.h>
#include <string.h>


int main() {
  FILE *fileAddress;
  fileAddress = fopen("sample.txt", "w");
  char name[50] = "Tutorial Gateway";
  int i;
  int len = strlen(name);

  if (fileAddress != NULL) {
    for (i = 0; i < len; i++) {
      printf("Character we are writing to the file = %c\n", name[i]);

      // Let us use
      fputc(name[i], fileAddress);
    }
    printf("\nWe have written the name successfully");
    fclose(fileAddress);
  } else {
    printf("\nUnable to create or open the sample.txt file.");
  }

  return 0;
}
