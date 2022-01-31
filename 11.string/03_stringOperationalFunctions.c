#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char a[20] = "Test String";
    char b[20] = "Test String2";
    printf("문자열의 길이: %d\n", strlen(a));
    printf("두 배열의 사전 순 비교: %d\n", strcmp(a, b)); //문자열 1이 문자열 2보다 사전적으로 앞에있다면 -1, 뒤면 -2
    
    char c[20] = "My name";
    char d[20] = "Testing Str";
    strcpy(c, d);
    printf("복사된 문자열: %s\n", c);

    char e[30] = "My name is ";
    char f[20] = "Testing Str";
    strcat(e, f);
    printf("합쳐진 결과 문자열: %s\n", e); //합쳐져서 들어가는 배열의 size 주의

    char g[20] = "I like you";
    char h[20] = "like";
    printf("찾은 문자열: %s\n", strstr(g, h)); //찾은 주소값 자체를 반환함으로 찾은 이후 모든 문자열이 반환 됨

    system("pause");

    return 0;
}