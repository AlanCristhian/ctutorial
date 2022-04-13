/* Example of struct initialization. */


#include <stdio.h>


typedef struct Vector2 {float x, y; } Vector2;


int main(void) {

  // Create and initialize the vector variable.
  Vector2 vector = {
    .x = 1.0f,
    .y = 2.0f
  };

  printf("vector = (%f, %f)\n", vector.x, vector.y);

  return 0;
}
