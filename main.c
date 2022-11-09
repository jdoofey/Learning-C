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

int main(void) {     //how to assign values of an array at a certain index
  int arr[5];
  arr[0] = -100;
  printf("%d\n", arr[0]);
  return 0;
}

// int main(void) {                  //prints the index of the number put in?
//   int arr[] = {1,2,3,4,5};
//   printf("%d\n", arr[1]);
//   return 0;
// }
// int main(void) {                       // for loops!
//   for (int i=1; i<=10; i++) {
//     printf("%d <--- count\n", i);
//   }
//   return 0;
// }
// int main(void) {
//   // printf("%d\n", abs_val(-2.50));        //2.50 is not an int so this is wrong, and needs to be fixed, even though it runs
//   // printf("%c\n", 65);           // prints A

//   return 0;
// }


// notes, end c files in .c
// gcc -o main main.c - command to compile the code for execution? -o means output
// after above step, can run ./main to run the file

// unsigned is a flag that means that an integer/number cannot be negative-> unsigned int my_int = 2 is valid, but if -2, will not compile

//long is 52 bit integer
//double is 54 bit floating point
