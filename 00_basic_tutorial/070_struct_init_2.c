/* Example of nested struct initialization. */


#include <stdio.h>


typedef struct Vector2 {
  float x;
  float y;
} Vector2;


typedef struct Object {
  char name[50];
  Vector2 position;
} Object;


int main(void) {

  // Nested initialization.
  Object object = {
    .name = "obj1",
    .position = {
      .x = 1.0,
      .y = 2.0,
    },
  };

  printf("name = %s\n", object.name);
  printf("position = (%f, %f)\n", object.position.x, object.position.y);

  return 0;
}
