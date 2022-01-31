#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define POW(x) (x * x)

int main(void) {
    int x = 10;
    printf("x의 제곱: %d\n", POW(x));

    system("pause");
    return 0;
}