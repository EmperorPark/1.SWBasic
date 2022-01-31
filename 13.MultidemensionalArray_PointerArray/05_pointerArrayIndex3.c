#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;
    printf("%d\n", *(p++));
    printf("%d\n", *(++p));
    printf("%d\n", *(p + 2));

    system("pause");

    return 0;
}