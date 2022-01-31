#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int a = 5;

void changeValue() {
    a = 10;
}

int main(void) {
    
    printf("%d\n", a);
    changeValue();
    printf("%d\n", a);
    

    system("pause");

    return 0;
}