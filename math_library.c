#include "math_library.h"
#include <stdio.h>

void add(int a, int b) {
    printf("addition: %d + %d = %d\n", a, b, a+b);
}
void sub(int a, int b) {
    printf("subtraction: %d - %d = %d\n", a, b, a-b);
}
void mult(int a, int b) {
    printf("multiplication: %d * %d = %d\n", a, b, a*b);
}
void div(int a, int b) {
    printf("division: %d / %d = %d\n", a, b, a/b);
}

// We have a new datatype called func_ptr which is
// a pointer to a function with 2 parameters of type int
// that returns void
typedef void (*func_ptr)(int, int);

// array of funtion pointers pointing to functions
// with the identity I specified above.
func_ptr func_ptr_arr[] = {add, sub, mult, div};

// Function definition
void execute_operation(int operation, int a, int b) {
    func_ptr_arr[operation](a, b);
}

