#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[10] = {6, 5, 4, 3, 9, 8, 0, 1, 2, 7};

    int i;
    for(i =0; i < 10; i++){
        printf("%d\n", &a[i]); //주소값 찾기, 주소연산자(&)
    }
    system("pause");

    return 0;
}