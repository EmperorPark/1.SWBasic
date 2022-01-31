#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int sum = 0;
    for(;;){
        int x;
        scanf("%d", &x);
        if (x == -1) break;
        sum += x;
    }
    printf("%d\n", sum);
    system("pause");

    return 0;
}