#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a;
    char c;
    scanf("%d", &a);
    printf("%d\n", a);
    scanf("%c", &c); //바로 종료됨 이전 숫자입력 후 입력한 공백이 문자 입력으로 처리
    printf("%c\n", c);
    
    system("pause");

    return 0;
}