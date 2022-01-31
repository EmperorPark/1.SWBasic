#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *a = "Hello World";
    printf("%s\n", a);
    printf("%c\n", a[1]);
    printf("%c\n", a[4]);
    printf("%c\n", a[8]);
    

    system("pause");

    return 0;
}