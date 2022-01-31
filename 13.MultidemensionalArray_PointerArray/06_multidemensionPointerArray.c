#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a [2][5] = {{1,2,3,4,5}, {6,7,8,9,10}};
    int (*p)[5] = a[1];
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", p[0][i]);
    }

    system("pause");

    return 0;
}