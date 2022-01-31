#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 5;
    int *b = &a; // 선언(*)
    printf("%d\n", *b); // 간접참조연산자(*)
    
    system("pause");

    return 0;
}