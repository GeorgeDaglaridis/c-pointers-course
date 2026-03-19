#include <stdio.h>

void function_1(int a) {
    printf("function_1: a = %d\n", a);
}

void function_2(int b) {
    printf("function_2: b = %d\n", b);
}

int main() {
    //void (*func_ptr)() = function_1; // same: void (*func_ptr)() = &function_1;
    void (*func_ptr)(int) = NULL;
    printf("sizeof(func_ptr) = %ld\n", sizeof(func_ptr));

    func_ptr = function_1;
    func_ptr(5);
    printf("address of function_1: %p\n", function_1);
    printf("address func_ptr points to: %p\n", func_ptr);
    //printf("sizeof(func_ptr()) = %ld\n", sizeof(func_ptr()));

    func_ptr = function_2;
    func_ptr(6);
    printf("address of function_2: %p\n", function_2);
    printf("address func_ptr points to: %p\n", func_ptr);

    return 0;
}