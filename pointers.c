#include <stdio.h>
#include <stdlib.h>

int main() {

    char c = 'A';
    char *c_ptr = &c;

    printf("c = %c, &c = %p\n", c, &c);
    printf("*c_ptr = %c, c_ptr = %p\n", *c_ptr, c_ptr);
    printf("&c_ptr = %p\n\n", &c_ptr);

    int i = 10;
    int *pi = &i;
    int * *ppi = &pi;
    int ** *pppi = &ppi;

    printf("&i = %p, &pi = %p, &ppi = %p, &pppi = %p\n", &i, &pi, &ppi, &pppi);
    printf("pi = %p, ppi = %p, pppi = %p\n\n\n", pi, ppi, pppi);

    char *p[10];
    printf("p = %p\n", p);
    for(int i=0; i<10; i++) {
        printf("p[%d] = %p\n", i, p[i]);
    }
    printf("*p[9] = %d\n\n\n", *p[9]);
    // printf("p[0] = %d\n", *p[0]); // Segmentation fault
    // printf("p[1] = %d\n", *p[1]); // Segmentation fault

    for(int i=0; i<10; i++) {
        p[i] = (char*)malloc(sizeof(char));
        //printf("p[%d] = %p, sizeof(p[%d]) = %ld\n", i, p[i], i, sizeof(p[i]));
        *p[i] = 10 - i;
    }
    for(int i=0; i<10; i++) {
        printf("p[%d] = %p, sizeof(p[%d]) = %ld --- *p[%d] = %d, sizeof(*p[%d]) = %lu\n", i, p[i], i, sizeof(p[i]), i, *p[i], i, sizeof(*p[i]));
    }
    printf("\nsizeof(p) = %lu\n\n", sizeof(p));
    
    for(int i=0; i<10; i++) {
        *p[i] = 0 + i;
    }
    for(int i=0; i<10; i++) {
        printf("p[%d] = %p, sizeof(p[%d]) = %ld --- *p[%d] = %d, sizeof(*p[%d]) = %lu\n", i, p[i], i, sizeof(p[i]), i, *p[i], i, sizeof(*p[i]));
    }
    printf("\n\n\n");

    for(int i=0; i<10; i++) {
        free(p[i]);
    }
    for(int i=0; i<10; i++) {
        printf("p[%d] = %p\n", i, p[i]);
    }
    printf("-----------------------------------------------------------------------------------------------------------------------------\n\n");

    for(int i=0; i<10; i++) {
        p[i]= (char*)malloc(sizeof(char));
        //printf("p[%d] = %p, sizeof(p[%d]) = %ld\n", i, p[i], i, sizeof(p[i]));
        *((p[i] + 0)) = 10 - i;
    }
    for(int i=0; i<10; i++) {
        printf("p[%d] + 0 = %p, sizeof(p[%d]+0) = %ld --- *(p[%d] + 0) = %d, sizeof(*(p[%d] + 0)) = %lu\n", i, p[i] + 0, i, sizeof(p[i]+0), i, *(p[i] + 0), i, sizeof(*(p[i] + 0)));
    }
    printf("\nsizeof(p) = %lu\n\n", sizeof(p));
    
    // for(int i=0; i<10; i++) {
    //     *(p + i) = 0 + i;
    // }
    // for(int i=0; i<10; i++) {
    //     printf("p + %d = %p, sizeof(p+%d) = %ld --- *(p+%d) = %d, sizeof(*(p+%d)) = %lu\n", i, p+i, i, sizeof(p+i), i, *(p+i), i, sizeof(*(p+i));
    // }
    // printf("\n\n\n");

    for(int i=0; i<10; i++) {
        free(p[i]+0);
    }
    // for(int i=0; i<10; i++) {
    //     printf("p + %d = %p\n", i, p+i);
    // }


    return 0;
}