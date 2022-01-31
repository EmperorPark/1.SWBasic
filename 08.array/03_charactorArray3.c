#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char a[] = "Hello World";
    int count = 0;
    for (int i = 0; i<=10; i++) {
        if (a[i] == 'l') count ++;
    }
    printf("%d\n", count);
    
    system("pause");

    return 0;
}