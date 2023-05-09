//
// Created by scafe on 2023/5/9.
//
#include <stdio.h>

int mul(int a, int b);

int main() {
    int c = mul(10, 20);
    printf("%d", c);
    return 0;
}

int mul(int a, int b) {
    return a+b;
}