#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  union{  
    int i;  
    struct{  
      char first;  
      int second;  
    }half;  
  }number;  
  number.i=0x4241;  
  printf("%d %d\n", number.half.first, number.half.second);  
  printf("%d\n", sizeof(number));
  number.half.first=0x61;  
  number.half.second=0x10;  
  printf("%x\n", number.i);  
}  
