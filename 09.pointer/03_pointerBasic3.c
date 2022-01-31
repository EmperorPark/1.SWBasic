#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 5;
    int *b = &a; // 선언(*)
    int **c = &b; // 포인터의 포인터
    printf("%d\n", **c); // 간접참조연산자(*)
    
    system("pause");

    return 0;
}