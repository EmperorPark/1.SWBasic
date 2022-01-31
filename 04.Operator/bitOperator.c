#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void binaryOutput(unsigned char num) {
    for (int i = 7; i >= 0; --i) { 
        int result = num >> i & 1;
        printf("%d", result);
    }
    printf("\n");
}

int main(void){
    unsigned char a = 0b11000011, b = 0b00011001;
    
    binaryOutput(~a);
    binaryOutput(a<<3);
    binaryOutput(a & b);
    binaryOutput(a | b);
    binaryOutput(a ^ b);
    

    system("pause");
    return 0;
}