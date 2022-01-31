#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    register int a = 10, i;
    for(i = 0; i < a; i++){
        printf("%d ", i);
    }

    system("pause");

    return 0;
}