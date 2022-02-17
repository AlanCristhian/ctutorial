/* In this example we created a function that accepts an integer variable
   and prints that variable as the output. Within the main program we used
   for loop to iterate the array and pass each element to the function that
   we created earlier. */


#include <stdio.h>


void printArray(int a) {
  printf("item = %d\n", a);
}


int main() {
  int array[] = {1, 2, 3, 4, 5, 6};

  for (int i = 0; i < 6; i++) {
    printArray(array[i]);
  }

  return 0;
}
