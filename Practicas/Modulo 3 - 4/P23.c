#include <stdio.h>

int main(void) {
    unsigned char a = 20;

    printf("a = %u\n", a);
    printf("a << 1 = %u\n", a << 1);
    printf("a >> 2 = %u\n", a >> 2);

    return 0;
}