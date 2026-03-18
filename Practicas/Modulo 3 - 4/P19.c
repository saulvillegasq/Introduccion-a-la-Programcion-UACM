#include <stdio.h>

int main(void) {
    short s = 32000;
    int i = 2000000000;
    long l = 300000L;
    long long ll = 9000000000LL;

    printf("short = %hd\n", s);
    printf("int = %d\n", i);
    printf("long = %ld\n", l);
    printf("long long = %lld\n", ll);

    return 0;
}