#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main(void) {
    int(*fp)(int, int) = add;
    printf("%d\n", fp(10,3));
    fp = sub;
    printf("%d\n", fp(10,3));

    system("pause");
    return 0;
}