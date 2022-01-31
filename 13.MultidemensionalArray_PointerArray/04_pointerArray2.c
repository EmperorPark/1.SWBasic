#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    int *b = a;// int *b = a[0]; 동일하게 동작(배열의 이름은 배열의 첫번째 주소)
    printf("%d\n", b[2]);

    system("pause");

    return 0;
}