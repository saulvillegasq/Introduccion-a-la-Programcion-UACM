#include <stdio.h>

int main(void) {
    unsigned char a = 5;
    unsigned char b = 9;

    printf("a & b = %u\n", a & b);
    printf("a | b = %u\n", a | b);
    printf("a ^ b = %u\n", a ^ b);

    b = ~a;  
    printf("a = %u\n", a);
    printf("~a = %u\n", b);

    return 0;
}