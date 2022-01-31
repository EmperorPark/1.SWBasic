#define __USE_MINGW_ANSI_STDIO 1 //now not working...
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//generic
#define ll long long
#define ld long double

int main(void) {
    ll a = 98654321000;
    ld b = 100.5054;
    printf("%.1f\n", (double)(a * b)); //mingw gcc 문제로 캐스팅 해야함

    system("pause");
    return 0;
}