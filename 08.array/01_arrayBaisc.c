#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[10] = {0,};

    int i;
    for(i =0; i < 10; i++){
        printf("%d\n", a[i]);
    }
    printf("\n");
    
    int b[10] = {6, 5, 4, 3, 9, 8, 0, 1, 2, 7};

    for(i =0; i < 10; i++){
        printf("%d\n", b[i]);
    }
    
    system("pause");

    return 0;
}