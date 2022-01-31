#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double b[10];
    
    printf("%d %d\n", b, b + 9);
    printf("%d %d\n", &b, &b[9]);

    system("pause");

    return 0;
}