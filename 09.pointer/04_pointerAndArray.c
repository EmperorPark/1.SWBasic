#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *b = a;

    printf("%d\n", b[2]);

    system("pause");

    return 0;
}