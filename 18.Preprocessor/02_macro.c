#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592653589793

int main(void) {
    int r = 10;
    printf("원의 둘레: %.2f\n", 2 * PI * r);

    system("pause");
    return 0;
}