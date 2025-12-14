#include <stdio.h>
int main() {
     int z, m, result;
     scanf("%d", &z);
     result = 0, m = 0;

     // while(m<=z){
     //      result += m;
     //      m++;
     // }

     for(; m<=z; m++){
          result += m;
     }

     printf("Result: %d", result);
     return 0;
}