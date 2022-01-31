#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 10;
    int b[10];
    b = &a;//error

    system("pause");

    return 0;
}