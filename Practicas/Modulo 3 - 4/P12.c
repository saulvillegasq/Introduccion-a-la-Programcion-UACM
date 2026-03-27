#include <stdio.h>

int main(void) {
    int a = 2;
    int b = 3;
    int c = 8;

    int r1 = a + b * c;
    int r2 = (a + b) * c;
    int r3 = a + b * c / 2;

    printf("a + b * c = %d\n", r1);
    printf("(a + b) * c = %d\n", r2);
    printf("a + b * c / 2 = %d\n", r3);

    return 0;
}