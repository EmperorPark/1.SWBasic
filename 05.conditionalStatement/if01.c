#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("손님이 몇명 왔나요?\n");
    int a;
    scanf("%d", &a);

    if(a == 1 || a == 2) {
        printf("2인석으로 안내합니다.\n");
    } 
    else if(a == 3 || a == 4) {
        printf("4인석으로 안내합니다.\n");
    } 
    else {
        printf("대형석으로 안내합니다.\n");
    }


    system("pause");
    return 0;
}