#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void function() {
    printf("It's my function.");
}

int main(void) {
    printf("%d\n", function);

    system("pause");
    return 0;
}