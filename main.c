#include <stdio.h>

int main(void) {
  int my_int = 1;  // how to create an variable of type integer
  float my_float = 0.5;

  printf("Hello, %d\n", my_int); //%d is the place holder for the integer
  printf("Hello, world\n");
  return 0; // if return 0 -> nothing bad happened; if return 1, something went wrong
}


// notes, end c files in .c
// gcc -o main main.c - command to compile the code for execution? -o means output
// after above step, can run ./main to run the file
