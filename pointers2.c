#include <stdio.h>
#include <stdlib.h>

int main() {

    char p[] = "George";

    printf("p (address) = %p\n", p);
    printf("p (string) = %s\n", p);
    printf("*p = %c\n", *p);
    printf("p[0] = %c\n", p[0]);
    printf("p+0 (address) = %p\n", p+0);
    printf("p+0 (string) = %s\n", p+0);
    printf("*(p+0) = %c\n", *(p+0));
    printf("--------------------------------\n");
    printf("p+1 (address) = %p\n", p+1);
    printf("p+1 (string) = %s\n", p+1);
    printf("*(p+1) = %c\n", *(p+1));
    printf("p[1] = %c\n", p[1]);
    printf("--------------------------------\n");
    printf("p+2 (address) = %p\n", p+2);
    printf("p+2 (string) = %s\n", p+2);
    printf("*(p+2) = %c\n", *(p+2));
    printf("p[2] = %c\n", p[2]);
    printf("--------------------------------\n");
    printf("p+3 (address) = %p\n", p+3);
    printf("p+3 (string) = %s\n", p+3);
    printf("*(p+3) = %c\n", *(p+3));
    printf("p[3] = %c\n", p[3]);
    printf("--------------------------------\n");
    printf("p+4 (address) = %p\n", p+4);
    printf("p+4 (string) = %s\n", p+4);
    printf("*(p+4) = %c\n", *(p+4));
    printf("p[4] = %c\n", p[4]);
    printf("--------------------------------\n");
    printf("p+5 (address) = %p\n", p+5);
    printf("p+5 (string) = %s\n", p+5);
    printf("*(p+5) = %c\n", *(p+5));
    printf("p[5] = %c\n", p[5]);
    printf("--------------------------------\n");
    printf("p+6 (address) = %p\n", p+6);
    printf("p+6 (string) = %s\n", p+6);
    printf("*(p+6) = %c\n", *(p+6));
    printf("p[6] = %c\n", p[6]);
    printf("--------------------------------\n");
    printf("--------------------------------\n");
    printf("------- array of pointers ------\n\n");

    // array of pointers where each is pointing to string, to an array of chars
    char *p_arr[] = {
        "George",
        "Stella",
        "Panos"
    };

    printf("------- first pointer is pointing to the first array of chars which holds \"George\" ------\n\n");
    printf("p_arr[0] (address) = %p\n", p_arr[0]); // pointer pointing to an array of chars holding "George", basically pointing to the first character 'G' of that array
    printf("p_arr[0] (string) = %s\n", p_arr[0]);
    printf("*p_arr[0] = %c\n", *p_arr[0]);
    printf("p_arr[0]+0 (address) = %p\n", p_arr[0]+0);
    printf("p_arr[0]+0 (string) = %s\n", p_arr[0]+0);
    printf("*(p_arr[0]+0) = %c\n", *(p_arr[0]+0));
    printf("------------------------------------------\n");
    printf("p_arr[0]+1 (address) = %p\n", p_arr[0]+1); // pointer pointing to "eorge", basically to the second character 'e' of the first array of chars
    printf("p_arr[0]+1 (string) = %s\n", p_arr[0]+1);
    printf("*(p_arr[0]+1) = %c\n", *(p_arr[0]+1));
    printf("------------------------------------------\n");
    printf("p_arr[0]+2 (address) = %p\n", p_arr[0]+2); // pointer pointing to "orge", basically to the third character 'o' of the first array of chars
    printf("p_arr[0]+2 (string) = %s\n", p_arr[0]+2);
    printf("*(p_arr[0]+2) = %c\n", *(p_arr[0]+2));
    printf("------------------------------------------\n");
    printf("p_arr[0]+3 (address) = %p\n", p_arr[0]+3); // pointer pointing to "rge", basically to the fourth character 'r' of the first array of chars
    printf("p_arr[0]+3 (string) = %s\n", p_arr[0]+3);
    printf("*(p_arr[0]+3) = %c\n", *(p_arr[0]+3));
    printf("------------------------------------------\n");
    printf("p_arr[0]+4 (address) = %p\n", p_arr[0]+4); // pointer pointing to "ge", basically to the fifth character 'g' of the first array of chars
    printf("p_arr[0]+4 (string) = %s\n", p_arr[0]+4);
    printf("*(p_arr[0]+4) = %c\n", *(p_arr[0]+4));
    printf("------------------------------------------\n");
    printf("p_arr[0]+5 (address) = %p\n", p_arr[0]+5); // pointer pointing to "e", basically to the sixth character 'e' of the first array of chars
    printf("p_arr[0]+5 (string) = %s\n", p_arr[0]+5);
    printf("*(p_arr[0]+5) = %c\n", *(p_arr[0]+5));
    printf("------------------------------------------\n");
    printf("p_arr[0]+6 (address) = %p\n", p_arr[0]+6); // pointer pointing to the null terminating char of the first array of chars, basically at the end of the first array of chars
    printf("*(p_arr[0]+6) = %c\n", *(p_arr[0]+6));
    printf("------------------------------------------\n");
    printf("------------------------------------------\n");

    printf("------- second pointer is pointing to the second array of chars which holds \"Stella\" ------\n\n");
    printf("p_arr[1] (address) = %p\n", p_arr[1]); // pointer pointing to the second array of chars holding "Stella", basically pointing to the first character 'S' of that second array
    printf("p_arr[1] (string) = %s\n", p_arr[1]);
    printf("*p_arr[1] = %c\n", *p_arr[1]);
    printf("p_arr[1]+0 (address) = %p\n", p_arr[1]+0);
    printf("p_arr[1]+0 (string) = %s\n", p_arr[1]+0);
    printf("*(p_arr[1]+0) = %c\n", *(p_arr[1]+0));
    printf("------------------------------------------\n");
    printf("p_arr[1]+1 (address) = %p\n", p_arr[1]+1); // pointer pointing to "tella", basically to the second character 't' of the second array of chars
    printf("p_arr[1]+1 (string) = %s\n", p_arr[1]+1);
    printf("*(p_arr[1]+1) = %c\n", *(p_arr[1]+1));
    printf("------------------------------------------\n");
    printf("p_arr[1]+2 (address) = %p\n", p_arr[1]+2); // pointer pointing to "ella", basically to the third character 'e' of the second array of chars
    printf("p_arr[1]+2 (string) = %s\n", p_arr[1]+2);
    printf("*(p_arr[1]+2) = %c\n", *(p_arr[1]+2));
    printf("------------------------------------------\n");
    printf("p_arr[1]+3 (address) = %p\n", p_arr[1]+3); // pointer pointing to "lla", basically to the fourth character 'l' of the second array of chars
    printf("p_arr[1]+3 (string) = %s\n", p_arr[1]+3);
    printf("*(p_arr[1]+3) = %c\n", *(p_arr[1]+3));
    printf("------------------------------------------\n");
    printf("p_arr[1]+4 (address) = %p\n", p_arr[1]+4); // pointer pointing to "la", basically to the fifth character 'l' of the second array of chars
    printf("p_arr[1]+4 (string) = %s\n", p_arr[1]+4);
    printf("*(p_arr[1]+4) = %c\n", *(p_arr[1]+4));
    printf("------------------------------------------\n");
    printf("p_arr[1]+5 (address) = %p\n", p_arr[1]+5); // pointer pointing to "a", basically to the sixth character 'a' of the second array of chars
    printf("p_arr[1]+5 (string) = %s\n", p_arr[1]+5);
    printf("*(p_arr[1]+5) = %c\n", *(p_arr[1]+5));
    printf("------------------------------------------\n");
    printf("p_arr[1]+6 (address) = %p\n", p_arr[1]+6); // pointer pointing to the null terminating char of the second array of chars, basically at the end of the second array of chars
    printf("p_arr[1]+6 (string) = %s\n", p_arr[1]+6);
    printf("*(p_arr[1]+6) = %c\n", *(p_arr[1]+6));
    printf("------------------------------------------\n");
    printf("------------------------------------------\n");

    printf("------- third pointer is pointing to the thirs array of chars which holds \"Panos\" ------\n\n");
    printf("p_arr[2] (address) = %p\n", p_arr[2]); // pointer pointing to the third array of chars holding "Panos", basically pointing to the first character 'P' of that third array
    printf("p_arr[2] (string) = %s\n", p_arr[2]);
    printf("*p_arr[2] = %c\n", *p_arr[2]);
    printf("p_arr[2]+0 (address) = %p\n", p_arr[2]+0);
    printf("p_arr[2]+0 (string) = %s\n", p_arr[2]+0);
    printf("*(p_arr[2]+0) = %c\n", *(p_arr[2]+0));
    printf("------------------------------------------\n");
    printf("p_arr[2]+1 (address) = %p\n", p_arr[2]+1); // pointer pointing to "anos", basically to the second character 'a' of the thid array of chars
    printf("p_arr[2]+1 (string) = %s\n", p_arr[2]+1);
    printf("*(p_arr[2]+1) = %c\n", *(p_arr[2]+1));
    printf("------------------------------------------\n");
    printf("p_arr[2]+2 (address) = %p\n", p_arr[2]+2); // pointer pointing to "nos", basically to the third character 'n' of the third array of chars
    printf("p_arr[2]+2 (string) = %s\n", p_arr[2]+2);
    printf("*(p_arr[2]+2) = %c\n", *(p_arr[2]+2));
    printf("------------------------------------------\n");
    printf("p_arr[2]+3 (address) = %p\n", p_arr[2]+3); // pointer pointing to "os", basically to the fourth character 'o' of the third array of chars
    printf("p_arr[2]+3 (string) = %s\n", p_arr[2]+3);
    printf("*(p_arr[2]+3) = %c\n", *(p_arr[2]+3));
    printf("------------------------------------------\n");
    printf("p_arr[2]+4 (address) = %p\n", p_arr[2]+4); // pointer pointing to "s", basically to the fifth character 's' of the third array of chars
    printf("p_arr[2]+4 (string) = %s\n", p_arr[2]+4);
    printf("*(p_arr[2]+4) = %c\n", *(p_arr[2]+4));
    printf("------------------------------------------\n");
    printf("p_arr[2]+5 (address) = %p\n", p_arr[2]+5); // pointer pointing to the null terminating char of the third array of chars, basically at the end of the third array of chars
    printf("p_arr[2]+5 (string) = %s\n", p_arr[2]+5);
    printf("*(p_arr[2]+5) = %c\n", *(p_arr[2]+5));
    printf("------------------------------------------\n");
    printf("------------------------------------------\n");

    return 0;
}