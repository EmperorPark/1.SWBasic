#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char a[15];
    gets(a);
    printf("%s\n", a);
    
    char b[15];
    fgets(b, sizeof(b), stdin);
    printf("%s\n", b);

    system("pause");

    return 0;
}