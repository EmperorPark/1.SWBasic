#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void add(int a, int b){
    a = a + b;
    //printf("%d\n",a);
}

int main(void) {
    int a = 7;
    add(a, 10);
    printf("%d\n",a);

    system("pause");

    return 0;
}