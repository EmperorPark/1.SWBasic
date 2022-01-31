#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int add(int a, int b){
    return a + b;
}

int main(void) {
    printf("%d\n", add(10,20));
    
    system("pause");

    return 0;
}