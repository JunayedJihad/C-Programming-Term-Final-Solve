#include <stdio.h>
int main() {
     int i = 4;
     while(i){
          printf("%d", i++);
          if(i==1) break;
          i-=2;
     }
     return 0;
}