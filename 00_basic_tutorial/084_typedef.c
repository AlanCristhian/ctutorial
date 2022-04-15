/* Typedef example. */


#include <stdio.h>
#include <string.h>


typedef struct Book {
  char title[50];
  char author[50];
  char subject[100];
  int id;
} Book;


int main(void) {
  Book book;

  strcpy(book.title, "C Programming");
  strcpy(book.author, "Nuha Ali");
  strcpy(book.subject, "C Programing Tutorial");
  book.id = 6495407;

  printf("Book title: %s\n", book.title);
  printf("Book author: %s\n", book.author);
  printf("Book subject: %s\n", book.subject);
  printf("Book id: %d\n", book.id);

  return 0;
}
