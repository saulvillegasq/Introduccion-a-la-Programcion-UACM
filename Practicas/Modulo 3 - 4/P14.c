#include <stdio.h>

int main(void) {
    int x = 8;
    int y, z;

    y = x--;
    z = --x;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    return 0;
}