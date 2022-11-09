#include <stdio.h>

// int main(void) {
//   int my_int = 1;  // how to create an variable of type integer
//   float my_float = 0.5;

//   printf("Hello, %d\n", my_int); //%d is the place holder for the integer
//   printf("Hello, world\n");
//   return 0; // if return 0 -> nothing bad happened; if return 1, something went wrong
// }

int abs_val(int x) {
  if (x<0) return -x;
  return x;
}

int main(void) {
  printf("%d\n", abs_val(-2.50));        //2.50 is not an int so this is wrong, and needs to be fixed, even though it runs
  return 0;
}


// notes, end c files in .c
// gcc -o main main.c - command to compile the code for execution? -o means output
// after above step, can run ./main to run the file
