#include <stdio.h>

void function_1() {
    printf("function_1\n");
}

void function_2() {
    printf("function_2\n");
}

int main() {

    //void (*func_ptr)() = function_1; // same: void (*func_ptr)() = &function_1;
    void (*func_ptr)() = NULL;
    printf("sizeof(func_ptr) = %ld\n", sizeof(func_ptr));

    func_ptr = function_1;
    func_ptr();
    printf("address of function_1: %p\n", function_1);
    printf("address func_ptr points to: %p\n", func_ptr);
    //printf("sizeof(func_ptr()) = %ld\n", sizeof(func_ptr()));

    func_ptr = function_2;
    func_ptr();
    printf("address of function_2: %p\n", function_2);
    printf("address func_ptr points to: %p\n", func_ptr);

    return 0;
}