#include <stdio.h>
#include <stdlib.h>

int main() {

    //printf("content of address from previous run = %d\n\n", *((int*) 0x614bf04762a0));

    printf("sizeof(size_t) = %ld\n\n", sizeof(size_t));

    int *p = (int *) malloc(4);
    printf("p = %p\n", p);
    printf("before asignment *p = %d\n", *p);

    *p = 4;
    printf("after asignment *p = %d\n", *p);

    int *ptr_i = p;

    free(p);

    printf("after freeing *ptr_i = %d\n", *ptr_i);

    printf("after freeing &p = %p\n\n", &p);
    
    printf("after freeing p = %p\n", p);
    printf("after freeing *p = %d\n", *p); // most likey it prints garbage
    printf("after freeing *(*(&p)) = %d\n", *(*(&p)));

    *p = 5; // undefined behaviour: you are writing to a memory location you no longer own
    printf("after freeing *p = %d\n", *p);
    printf("after freeing *(*(&p)) = %d\n", *(*(&p)));

    // Correct approach or Better approach
    // free(p);
    // p = NULL:

    return 0;
}