int k;  /* object declaration */
k = 2;  /* object assignment */
/* lvalue = memory address; rvalue = object value; int = type of rvalue */
int j, k;
k = 2;
j = 7;   /* j is the address or lvalue; 7 is the object value or rvalue */
k = j;   /* copy the rvalue or value of the j address on to rvalue of k address */
int *ptr;  /* A pointer variable. int is the type of the rvalue or value. */
/* A pointed declared outside a function is null */
/* A object declared outside a function is initialized to zero. */
/* null pointer = doesn't point to any value */
ptr = &k;  /* Stores the address of k on the value of ptr. */
*ptr = 7; /* stores 7 on the value of what ptr is pointing on. So stores 7 in k */
printf("%d\n", *ptr); /* prints 7 */
printf("%p\n", (void *)&ptr); /* prints the address of ptr */
(void *)&j  /* (void *) is the «address type» of c */
/* address = ptr; value = *ptr */
int *ptr;
*ptr = 2;
ptr + 1;  /* adds sizeof(int) to ptr */
int my_array[] = {1, 23, 17, 4, -5, 100};
int *ptr;
ptr = &my_array[0];  /* the address of the first element */
ptr = my_array;  /* same than above */
my_array = ptr;  /* Wrong! ptr is a varible and my_array is a constant */
void *vptr;  /* void pointer variable or generic pointer (can store any type) */
char my_string[4 + 1];
my_string[0] = 'A';
my_string[1] = 'l';
my_string[2] = 'a';
my_string[3] = 'n';
my_string[4] = '\0';
char my_string[4 + 1] = {'A', 'l', 'a', 'n', '\0'};
char my_string[4 + 1] = "Alan";
char *ps;
*ps = 'a';  /* when you change the pointer, also the target value changes */
ptr = my_string;
(*ptr)++; /* increments the value of what's ptr is pointing to (Alan->Blan) */
struct tag {
    char lname[20];     /* last name */
    char fname[20];     /* first name */
    int age;            /* age */
    float rate;         /* e.g. 12.75 per hour */
};
struct tag *st_ptr;  /* pointer to an struct */
st_ptr = &my_struct;  /* assign the address of my_struct to st_ptr */
(*st_ptr).age = 63;     // (*st_ptr) : lookup the struct.
                        // .age : lookup the field age of the struct.
str_ptr->age = 63;      // Syntax suggar to do the same than above.

char my_name[] = "Alan"; // constant, 5 bytes
char *my_name = "Alan"; // variable, 5 bytes plus the size of the pointer

void f() {char a[2] = "a"}; // "a" is stored in the stack
                            // 2 bytes of memory
void g() {char *b = "b"};   // "b" could be anywhere,
                            // 2 byest of memory plus the size of the pointer.
