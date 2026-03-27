#include <stdio.h>

int main(void) {
    int a = 5;
    int b = 2;

    printf("Division entera: %d\n",a / b);
    printf("Division real sin casteo correcto: %f\n", (float)(a / b));
    printf("Division real con casteo correcto: %d\n", (float)a / b);

    return 0;
}

/*
#include <stdio.h>

int main(void) {
    int a = 3;
    float b = 3.0f;

    printf("a == b -> %d\n", a == b);

    return 0;
}
*/