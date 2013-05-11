#include <stdio.h>
#include <stdlib.h>

int* f1() {
    int a[3]={1,2,3};
    return a;
}

void f2(int * ret) {
    int a[3]={4,5,6};
    ret=a;
}

int f3(int a, int b) {
    return a+b;
}

int main(int argc, char** argv) {
    int * a = f1();
    //printf("%d\n", *a);
    int d = 10;
    int* b = &d;
    f2(b);
    f3(2,3);
    printf("%d %d %d\n", *a, *a, *b);
    printf("%d %d %d\n", *a, *a, *b);
    a = f1();
    printf("%d %d %d\n", *a, *a, *b);
    printf("%d %d %d\n", *a, *a, *b);
}  


