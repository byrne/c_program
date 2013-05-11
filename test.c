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

int main(int argc, char** argv) {
    int * a = f1();
    printf("%d\n", *a);
    int d = 10;

    int& pp = d;
    //char* pChar = NULL;
    //int* pInt = NULL;
    //printf("%d %d\n", sizeof(pChar), sizeof(pInt));
    int* b = &d;
    f2(b);
    printf("%d %d\n", *a, *b);
}  


