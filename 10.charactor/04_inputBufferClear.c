#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a;
    char c;
    scanf("%d", &a);
    printf("%d\n", a);
    
    int temp;
    // 한 자씩 받아서 파일의 끝이거나 개행문자를 만나면 입력을 멈추므로 항상 입력 버퍼를 비움
    // while을 넣어 공백이나 EOF가 여러개라도 다 버퍼를 처리해서 버퍼가 전부 비워짐
    while ((temp = getchar()) != EOF && temp != '\n') {}
    
    scanf("%c", &c);
    printf("%c\n", c);
    
    system("pause");

    return 0;
}