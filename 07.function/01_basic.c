#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void dice(int input){
    printf("던진 주사위: %d\n", input);
}

int main(void) {
    dice(3);
    dice(5);
    dice(1);
    
    system("pause");

    return 0;
}