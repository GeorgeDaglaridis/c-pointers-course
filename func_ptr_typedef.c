#include <stdio.h>

void function_1() {
    printf("function_1\n");
}

void function_2() {
    printf("function_2\n");
}

typedef void (*func_ptr)(void); // now function pointer becomes a type

int main() {

    //void (*func_ptr)() = function_1; // same: void (*func_ptr)() = &function_1;
    //void (*func_ptr)() = NULL;
    func_ptr fptr = NULL;

    printf("sizeof(fptr) = %ld\n", sizeof(fptr));

    fptr = function_1;
    fptr();
    printf("address of function_1: %p\n", function_1);
    printf("address fptr points to: %p\n", fptr);
    //printf("sizeof(func_ptr()) = %ld\n", sizeof(func_ptr()));

    fptr = function_2;
    fptr();
    printf("address of function_2: %p\n", function_2);
    printf("address fptr points to: %p\n", fptr);

    return 0;
}