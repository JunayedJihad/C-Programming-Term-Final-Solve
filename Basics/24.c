#include <stdio.h>
int var = 5;
// void func();

int main() {
     int a =10, b =10;
     printf("%d\n", a);
     func();
     printf("%d\n", var);
     return 0;
}

void func(){
     int x = var;
     printf("%d\n", var);
     var += 1;
}