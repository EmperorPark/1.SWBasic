#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int (*process(char* a))(int, int){
    printf("%s\n", a);
    return add;
}

int main(void) {
    printf("%d\n", process("10과 20을 더해보겠습니다.")(10,20));

    system("pause");
    return 0;
}