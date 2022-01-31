#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void myFunction() {
    printf("It's my function.\n");
}

void yourFunction() {
    printf("It's your function.\n");
}

int main(void) {
    void(*fp)() = myFunction;
    fp();
    fp = yourFunction;
    fp();

    system("pause");
    return 0;
}