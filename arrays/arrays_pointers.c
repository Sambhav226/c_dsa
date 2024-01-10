#include <stdio.h>

int main(){

    int b = 10;
    int *p;
    p = &b;

    printf("%d", b);
    printf("%d", *p);
    printf("%p", &b);
    printf("%p", p);
}