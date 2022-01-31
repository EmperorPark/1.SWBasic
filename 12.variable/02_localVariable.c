#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 7;
    if (1) {
        int a = 5;
    }
    printf("%d\n", a);
    system("pause");

    return 0;
}