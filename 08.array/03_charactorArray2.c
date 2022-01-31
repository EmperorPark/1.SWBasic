#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char a[20] = "Hello World";
    a[4] = ',';
    printf("%s\n", a);
    
    system("pause");

    return 0;
}